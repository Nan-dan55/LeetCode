class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        
        int n=s.size();
        ans.push_back(s[0]);
        char last=s[0];
        int cnt=1;
        for(int i=1;i<n;i++){
           if(s[i]==last){
            cnt++;
           } else{
            last=s[i];
            cnt=1;
           }
           if(cnt>=3){
            continue;
           }
           ans.push_back(s[i]);
        }
        return ans;
    }
};