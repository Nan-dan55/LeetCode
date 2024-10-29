class Solution {
public:
    int func(vector<int>& arr, int k) {
       if(k<0){
        return 0;
       }
         int f=0;
         int r=0;
      int n=arr.size();int cnt=0;int sum=0;
      while(r<n){
        if(arr[r]==1){
            cnt++;
        }
        while(cnt>k && f<n){
            if(arr[f]==1){
                cnt--;
            }
            f++;
        }
        if(cnt<=k){
            sum+=r-f+1;
        }
        r++;
      }
      return sum;
    }
    int numSubarraysWithSum(vector<int>& arr, int k) {
        
   return func(arr,k)-func(arr,k-1);
      
        
    }
};