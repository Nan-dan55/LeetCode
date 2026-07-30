class Solution {
    public int longestSubarray(int[] arr, int k) {
        // code here
        int n=arr.length;
        int sum=0;
        HashMap<Integer,Integer> map= new HashMap<>();
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                ans=Math.max(i+1,ans);
            }
            int rem= sum-k;
            if(map.containsKey(rem)){
                ans= Math.max(i-map.get(rem),ans);
            }
            if(map.containsKey(sum)==false){
                map.put(sum,i);
            }
        }
        return ans;
    }
}
