class Solution {
public:
    int characterReplacement(string s, int k) {
 int n=s.size();int r=0,l=0;
        int hash[26]={0};int maxf=0;int maxlen=0;
        while(r<n){
            if (s[r] >= 'A' && s[r] <= 'Z') {
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            int changes= r-l+1-maxf;
            while(changes>k){
              hash[s[l] - 'A']--;
                l++;
                changes=r-l+1-maxf;
            }
            if(changes<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
            }
        }
        return maxlen;
    }
};