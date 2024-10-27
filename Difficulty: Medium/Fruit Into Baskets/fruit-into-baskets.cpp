//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(vector<int> &arr) {
        int n=arr.size();
        int l=0,r=0;int maxLen=0;
        map<int,int> mpp;
        while(r<n){
            mpp[arr[r]]++;
            
                
                while(mpp.size()>2){
                    mpp[arr[l]]--;
                    if(mpp[arr[l]]==0){
                        mpp.erase(arr[l]);
                    }
                    l++;
                }
                
            
            
            if(mpp.size()<=2){
                int len=r-l+1;
                maxLen=max(len,maxLen);
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
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalFruits(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends