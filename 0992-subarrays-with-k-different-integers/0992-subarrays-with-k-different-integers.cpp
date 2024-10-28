class Solution {
public:
    int func(vector<int>& nums, int k) {
        int n=nums.size();
        int r=0,l=0;
        map<int,int> mpp;int cnt=0;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                l++;
            }
            if(mpp.size()<=k){
                cnt+=r-l+1;
            }
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int f1=func(nums,k);
        int f2=func(nums,k-1);
        return f1-f2;
    }
};