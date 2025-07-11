class Solution {
  public:
    int knapsack(int capacity, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<int> prev(capacity+1,0);
        vector<int> cur(capacity+1,0);
        for(int i=0;i<=capacity;i++){
            if(i>=wt[0]){
                prev[i]=val[0];
            }
        }
        for(int i=1;i<n;i++){
            for(int target=0;target<=capacity;target++){
                int notTake=prev[target];
                int take=0;
                if(wt[i]<=target){
                    take=val[i]+prev[target-wt[i]];
                }
                cur[target]=max(take,notTake);
            }
            prev=cur;
        }
        return prev[capacity];
    }
};