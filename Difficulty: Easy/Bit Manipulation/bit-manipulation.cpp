//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
     int dup=num;
     if((dup>>(i-1))&1){
         cout<<1<<" ";
     }else{
         cout<<0<<" ";
     }
     
     int ans=num|(1<<(i-1));
     cout<<ans<<" ";
     
     ans=num&(~(1<<(i-1)));
     cout<<ans<<" ";
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends