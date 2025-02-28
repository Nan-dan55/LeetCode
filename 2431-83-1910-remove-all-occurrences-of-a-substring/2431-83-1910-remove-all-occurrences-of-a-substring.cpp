class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.size();
        while(static_cast<int>(s.find(part))>=0){
            s.erase(static_cast<int>(s.find(part)),part.length());
        }
         
        return s;
    }
};