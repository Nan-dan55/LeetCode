class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n=s.size();
        map<char,int> mpp;
        int l=0,r=0;
        int ans=-1;
        while(r<n){
            mpp[s[r]]++;
            
            if(mpp.size()>k){
                while(mpp.size()>k){
                    mpp[s[l]]--;
                    if(mpp[s[l]]==0){
                        mpp.erase(s[l]);
                    }
                    l++;
                }
            }
            if(mpp.size()==k){
                ans=max(ans,r-l+1);
            }
            r++;
        }
        return ans;
    }
};