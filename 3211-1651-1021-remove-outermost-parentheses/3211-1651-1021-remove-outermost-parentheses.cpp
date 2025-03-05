class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string ans;
        stack<char> st;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(st.empty()){
                    st.push(s[i]);
                }else{

                    cnt++;
                    ans.push_back(s[i]);
                }
            }
            else if(s[i]==')'){
                if(cnt>0){
                    ans.push_back(s[i]);
                    cnt--;
                }else{
                    st.pop();
                }
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};