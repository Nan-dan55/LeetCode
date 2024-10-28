class Solution {
public:
int func(vector<int>& nums, int k){
     int n=nums.size();
        int r=0,l=0;int cnt=0;int sum=0;
        while(r<n){
            if(nums[r]%2==1){
                cnt++;
            }
            while(cnt>k){
                 if(nums[l]%2==1){
                    cnt--;
                }
                l++;
            }

            if(cnt<=k){
                sum+=r-l+1;
            }
            
              r++;
        }
        return sum;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
     int f1=func(nums,k);
     int f2=func(nums,k-1);
     return f1-f2;
    }
};