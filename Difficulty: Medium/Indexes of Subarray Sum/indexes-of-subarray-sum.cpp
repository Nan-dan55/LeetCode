//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        map<int,int> mpp;
        int sum=0;
        int length=0;
        int left,right=-1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==target){
                length=i+1;
                right=i+1;
                left=1;
                break;
            }
            int rem= sum-target;
            if(mpp.find(rem)!=mpp.end()){
                int newLength= i-mpp[rem];
                
                    length=newLength;
                    right=i+1;
                    left= abs(length-right)+1;
                    break;
                
            }
            mpp[sum]=i;
        }
        vector<int> ans;
        if(left==-1 || right==-1){
            ans.push_back(-1);
            return ans;
        }else{
            ans.push_back(left);
            ans.push_back(right);
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
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends