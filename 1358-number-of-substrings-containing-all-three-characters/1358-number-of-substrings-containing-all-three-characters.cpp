class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int hash[3]={0,0,0};
        int r=0,l=0;int sum=0;
        while(r<n){
            hash[s[r]-'a']++;
            while(hash[0]>=1 && hash[1]>=1 && hash[2]>=1){
                sum+=n-r;
                hash[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return sum;
      
    }
};