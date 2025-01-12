//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int l=0;
        int r=n-1;
        int lmax=0;
        int rmax=0;
        int total=0;
        while(l<r){
            if(arr[l]<arr[r]){
                if(arr[l]>lmax){
                    lmax=arr[l];
                }
                total+= lmax-arr[l];
                l++;
            }else{
                if(arr[r]>rmax){
                    rmax=arr[r];
                }
                total+= rmax-arr[r];
                r--;
            }
        }
        return total;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends