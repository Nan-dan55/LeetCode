class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.size()==1 && s2.size()==1){
            return s1==s2;
        }
        string clockwise=s1;
        string anticlock=s1;
        int l=2;
        int r=s1.size()-2;
        reverse(clockwise.begin(),clockwise.begin()+2);
        reverse(clockwise.begin()+2,clockwise.end());
        reverse(clockwise.begin(),clockwise.end());
        reverse(anticlock.begin(),anticlock.begin()+r);
        reverse(anticlock.begin()+r,anticlock.end());
        reverse(anticlock.begin(),anticlock.end());
        if(clockwise==s2){
            return true;
        }
        if(anticlock==s2){
            return true;
        }
        return false;
        
    }
};
