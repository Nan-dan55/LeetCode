class Solution {
    static ArrayList<Integer> leaders(int arr[]) {
        // code here
        int n=arr.length;
        ArrayList<Integer> ans= new ArrayList<>();
        ans.add(arr[n-1]);
        int x=0;
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=ans.get(x)){
                ans.add(arr[i]);
                x++;
            }
            
        }
        Collections.reverse(ans);
        return ans;
    }
}
