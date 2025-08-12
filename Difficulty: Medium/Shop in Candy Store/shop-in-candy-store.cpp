class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& arr, int k) {
        // Code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int min=0;
        int total=0;
        int i=0;
        while(total<n){
            min+=arr[i];
            total+=k+1;
            i++;
        }
        int max=0;
        total=0;
        i=n-1;
        while(total<n){
            max+=arr[i];
            total+=k+1;
            i--;
        }
        return {min,max};
    }
};