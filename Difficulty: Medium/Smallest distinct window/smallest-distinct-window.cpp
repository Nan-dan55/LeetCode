class Solution {
  public:
    int findSubString(string& s) {
        // code here
        int n=s.size();
        int ans=INT_MAX;
        int l=0,r=0;
        map<char,int> mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        int k=mpp.size();
        map<char,int> mppp;
        
        while(r<n){
            mppp[s[r]]++;
            while(mppp.size()==k){
                ans=min(ans,r-l+1);
                mppp[s[l]]--;
                
                if(mppp[s[l]]==0){
                    mppp.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};