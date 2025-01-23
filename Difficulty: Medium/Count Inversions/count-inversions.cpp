//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
   
    int mergeSort(vector<int> &arr,int left,int right){
        int cnt=0;
        if(left>=right){
            return cnt;
            
        }
            int mid=(left+right)/2;
           cnt+= mergeSort(arr,left,mid);
           cnt+= mergeSort(arr,mid+1,right);
          cnt+=  merge(arr,left,right,mid);
          return cnt;
        
    }
    int merge(vector<int> &arr,int left,int right,int mid){
        vector<int> temp;
        int i=left;
        int j=mid+1;
        int cnt=0;
        while(i<=mid && j<=right){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                cnt+=(mid-i+1);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=right){
            temp.push_back(arr[j]);
            
            j++;
        }
          for (int k = left; k <= right; k++) {
            arr[k] = temp[k - left];
        }
        return cnt;
    }
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int n=arr.size();
       int cnt= mergeSort(arr,0,n-1);
   
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends