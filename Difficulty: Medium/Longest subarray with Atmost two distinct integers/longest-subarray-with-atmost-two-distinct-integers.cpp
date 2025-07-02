class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n=arr.size();
        int l=0,r=0;
        map<int,int> mpp;
        int len=0;
        while(r<n){
            mpp[arr[r]]++;
            if(mpp.size()<=2){
                len=max(len,r-l+1);
            }
            if(mpp.size()>2){
                while(mpp.size()>2){
                    mpp[arr[l]]--;
                    if(mpp[arr[l]]==0){
                        mpp.erase(arr[l]);
                    }
                    l++;
                }
                len=max(len,r-l+1);
            }
            r++;
        }
        
        return len;
    }
};