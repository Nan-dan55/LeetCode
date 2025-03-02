class Solution {
public:
    int countPrimes(int n) {
        vector<int> hash(n,1);
     
        for(int i=0;i*i<n;i++){
            if(i==0 || i==1){
                hash[i]=0;
            }
            if(hash[i]==1){
                for(int j=i*i;j<n;j+=i){
                    hash[j]=0;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<n;i++){
            if(hash[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};