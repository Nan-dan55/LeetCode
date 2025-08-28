class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        sort(arr.begin(),arr.end());
        const int MOD = 1e9 + 7;
        long long ans=0;
        int n=arr.size();
        for(int i=1;i<n;i++){
            ans = (ans + (1LL * arr[i] * i) % MOD) % MOD; 
        }
        return ans%MOD;
    }
};