//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            map<int,int> mpp;
            for(int j=i+1;j<n;j++){
                int rem= target - (arr[i]+arr[j]);
                if(mpp.find(rem)!=mpp.end()){
                    cnt+=mpp[rem];
                }
                mpp[arr[j]]++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends