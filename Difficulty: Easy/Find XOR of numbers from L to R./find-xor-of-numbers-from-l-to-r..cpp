//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int func(int a){
        if(a%4==1){
            return 1;
        }else if(a%4==2){
            return a+1;
        }else if(a%4==3){
            return 0;
        }else{
            return a;
        }
        return 1;
    }
    int findXOR(int l, int r) {
        // complete the function here
        return func(l-1)^func(r);
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends