class Solution {
public:
    bool isCircularSentence(string s) {
        int n=s.size();
        char a= 32;
        for(int i=0;i<n;i++){
            if(s[i]==a){
               if(i==0){
                return false;
               }
                if(s[i-1]==s[i+1]){

                }else{
                  return  false;
                }
            }
        }
        if(s[n-1]!=s[0]){
            return false;
        }
        return true;
    }
};