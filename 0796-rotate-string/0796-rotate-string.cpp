class Solution {
public:
    bool rotateString(string s, string g) {
       int n=s.size();
       s=s+s;
       
       if(s.find(g)!=-1 && g.size()==n){
        return true;
       }
       return false;
    }
};