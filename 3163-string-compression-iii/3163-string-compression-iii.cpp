class Solution {
public:
    string compressedString(string s) {
        string ans="";
        int n=s.size();
        int cnt=1;
        char a=s[0];
        for(int i=1;i<n;i++){
            if(a==s[i]){
                cnt++;
                if(cnt==9){
                    ans.append(to_string(cnt));
                    ans.push_back(a);
                    cnt=0;
                }
              }else{
                if(cnt!=0){
                ans.append(to_string(cnt));
                ans.push_back(a);
                cnt=1;
                a=s[i];
                }
                cnt=1;
                a=s[i];
            }
        }
        if(cnt!=0){
        ans.append(to_string(cnt));
        ans.push_back(a);
        }
        return ans;
    }
};