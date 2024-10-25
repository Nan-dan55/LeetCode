class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        map<int,int> mpp;
        int n=nums.size();
        int r=0; int l=0;int maxLen=0;
        while(r<n){
            if(nums[r]==0){
                mpp[nums[r]]++;
            }
           
            if(mpp[0]>k){
                if(nums[l]==0){
                    mpp[nums[l]]--;
                }
                l++;
            }
             if(mpp[0]<=k){
                int len=r-l+1;
                maxLen=max(maxLen,len);
            }
            r++;
        }
        return maxLen;
    }
};