class Solution {
public:
    int divide(int dividend, int divisor) {
         if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; 
        }
        if(dividend == INT_MAX && divisor ==1){
            return INT_MAX;
        }
        long long n=llabs((long long)dividend);
        long long m=llabs((long long)divisor);
        if(n==m){
           if((divisor<0 && dividend>0)|| (divisor>0 && dividend<0)){
            return -1;
        }else{
            return 1;
        }
        }
        
        long ans=0;
        while(n>=m){
            int cnt=0;
            while(n>=(m<<cnt+1)){
                cnt++;
            }
            n= n-(m<<cnt);
            ans+=(1<<cnt);
        }
        if((divisor<0 && dividend>0) || (divisor>0 && dividend<0)){
            return -ans;
        }
        return ans;
    }
};