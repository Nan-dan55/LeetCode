//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int n=s.size();
    int r=0,l=0;int maxLen=-1;
    map<char,int> mpp;
    while(r<n){
        mpp[s[r]]++;
        if(mpp.size()>k){
            mpp[s[l]]--;
            if(mpp[s[l]]==0){
                mpp.erase(s[l]);
            }
            l++;
        }
        if(mpp.size()==k){
            int len=r-l+1;
            maxLen=max(maxLen,len);
        }
        r++;
    }
    return maxLen;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends