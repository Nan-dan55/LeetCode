class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int l=floor(n/3);
        for(auto &it:mpp){
            if(it.second>l){
                v.push_back(it.first);
            }
        }
        return v;

    }
};