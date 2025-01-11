//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.size();
        map<char,int> mpp;
        int l=0,r=0;
        int len=0;
        while(r<n){
            mpp[s[r]]++;
            if(mpp[s[r]]>1){
                while(mpp[s[r]]>1){
                    mpp[s[l]]--;
                    l++;
                }
            }
            int newLen=r-l+1;
            r++;
            len=max(len,newLen);
        }
        return len;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends