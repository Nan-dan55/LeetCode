//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
   int n1 = s1.size();
        int n2 = s2.size();

        // Check if any character in s2 is not in s1
        set<char> charSet(s1.begin(), s1.end());
        for (int i = 0; i < n2; i++) {
            if (charSet.find(s2[i]) == charSet.end()) {
                return -1;  // If s1 lacks any character from s2, return -1
            }
        }

        string temp = s1;
        int count = 1;

        // Repeat s1 until its length is at least as long as s2
        while (temp.size() < n2) {
            temp += s1;
            count++;
        }

        // Check if s2 is a substring of temp
        if (temp.find(s2) != string::npos) {
            return count;
        }

        // Append s1 one more time to handle cases where s2 may span across the boundary
        temp += s1;
        count++;

        // Check again
        if (temp.find(s2) != string::npos) {
            return count;
        }

        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
// } Driver Code Ends