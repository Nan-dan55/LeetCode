//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> ans;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            if(it.second==2){
                ans.push_back(it.first);
                break;
            }
        }
        sort(arr.begin(),arr.end());
        int check=0;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]>1){
                ans.push_back(arr[i]-1);
                check=1;
                break;
            }
        }
        if(check==0){
            if(mpp.find(1)!=mpp.end()){
                ans.push_back(arr[n-1]+1);
            }else{
                ans.push_back(1);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends