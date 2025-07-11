// User function Template for C++

class Solution {
  public:
    int func(vector<int>& val, vector<int>& wt, int capacity,int ind,vector<vector<int>>& dp){
        if(ind==0){
          
                return (capacity/wt[ind])*val[ind];
            
           
        }
        if(dp[ind][capacity]!=-1){
            return dp[ind][capacity];
        }
        int notpick=func(val,wt,capacity,ind-1,dp);
        int pick=0;
        if(wt[ind]<=capacity){
            pick=val[ind]+func(val,wt,capacity-wt[ind],ind,dp);
        }
        return dp[ind][capacity]=max(notpick,pick);
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
        int ans= func(val,wt,capacity,n-1,dp);
        return ans;
    }
};