class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            if(!isalpha(s[i]) && !isdigit(s[i])){
                i++;
            }
           else if(!isalpha(s[j]) && !isdigit(s[j])){
                j--;
            }
          else  if(tolower(s[i])!=tolower(s[j])){
                return false;
            }else{
                i++,j--;
            }
        }
        return true;
    }
};