class Solution {
public:
       int countPairs(vector<int> &arr,int low,int high,int mid){
        int right=mid+1;
        int total=0;
        for(int i=low;i<=mid;i++){
            while(right<=high && arr[i]>(long long)arr[right]*2){
                right++;
            }
            total+=right-(mid+1);
        }
        return total;
       }
       int mergeSort(vector<int> &arr,int left,int right){
        int cnt=0;
        if(left>=right){
            return cnt;
            
        }
            int mid=(left+right)/2;
           cnt+= mergeSort(arr,left,mid);
           cnt+= mergeSort(arr,mid+1,right);
           cnt+=countPairs(arr,left,right,mid);
           merge(arr,left,right,mid);
          return cnt;   
    }
    void merge(vector<int> &arr,int left,int right,int mid){
        vector<int> temp;
        int i=left;
        int j=mid+1;
        int cnt=0;
        while(i<=mid && j<=right){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=right){
            temp.push_back(arr[j]);
            
            j++;
        }
          for (int k = left; k <= right; k++) {
            arr[k] = temp[k - left];
        }
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=mergeSort(nums,0,n-1);
        return cnt;
    }
};