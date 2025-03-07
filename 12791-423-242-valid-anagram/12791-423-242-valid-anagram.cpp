class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2){
            return false;
        }
        string sval=s;
        string tval=t;
        int hash1[128]={0};
        int hash2[128]={0};
        for(int i=0;i<n1;i++){
            hash1[s[i]]++;
            hash2[t[i]]++;
        }
        for(int i=0;i<128;i++){
            if(hash1[i]!=hash2[i]){
                return false;
            }
        }
        for(int i=0;i<n1;i++){
            if(s[i]!=t[i]){
                swap(s[i],t[i]);
            }
        }
        for(int i=0;i<n1;i++){
            if(s[i]!=tval[i]){
                return false;
            }
            if(t[i]!=sval[i]){
                return false;
            }
        }
        return true;
    }
};