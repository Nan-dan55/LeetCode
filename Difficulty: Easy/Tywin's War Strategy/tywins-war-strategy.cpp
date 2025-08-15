class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int cnt=0;
        int n=arr.size();
        int val=0;
        if(n%2==0){
            val=n/2;
        }else{
            val=n/2 +1;
        }
        for(int i=0;i<n;i++){
            if(arr[i]%k==0){
                arr[i]=0;
                cnt++;
            }else{
                arr[i]=k-(arr[i]%k);
            }
        }
        if(cnt>=val) return 0;
        sort(arr.begin(),arr.end());
        int change=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                continue;
            }else{
                change+=arr[i];
                cnt++;
                if(cnt>=val){
                    break;
                }
            }
        }
        return change;
    }
};