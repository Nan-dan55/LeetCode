class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mpp;
        int r=0;int n=s.size();
        int l=0;int cnt=0;
        while(r<n){
         if(mpp.find(s[r])!=mpp.end()){
            if(mpp[s[r]]>=l)
            l=mpp[s[r]]+1;
         }
            int ans=r-l+1;
            mpp[s[r]]=r;
            cnt=max(cnt,ans);
            r++;
        }
        if(cnt==0){
            return s.size();
        }
        return cnt;
        
    }
};