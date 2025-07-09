class Solution {
  public:
    int func(vector<int>& arr,int k,int ind,vector<vector<int>>& dp){
         if(ind == 0){
            if(k == 0 && arr[0] == 0) return 2; 
            if(k == 0 || arr[0] == k) return 1;
            return 0;
        }
        if(dp[ind][k]!=-1){
            return dp[ind][k];
        }
        int notTake=func(arr,k,ind-1,dp);
        int take=0;
        if(arr[ind]<=k){
            take=func(arr,k-arr[ind],ind-1,dp);
        }
        return dp[ind][k]=take+notTake;
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        vector<vector<int>> dp(arr.size(),vector<int>(target+1,-1));
        int find=func(arr,target,arr.size()-1,dp);
        return find;
        
    }
};