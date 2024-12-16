//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n1=a.size();
        int n2=b.size();
        int i=1;
        int m=0;
        int n=0;
          while (i < k) {
            if (m < n1 && (n >= n2 || a[m] < b[n])) {
                m++;
            } else if (n < n2) {
                n++;
            }
            i++;
        }
          if (m < n1 && (n >= n2 || a[m] < b[n])) {
            return a[m];
        }
        return b[n];
    
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends