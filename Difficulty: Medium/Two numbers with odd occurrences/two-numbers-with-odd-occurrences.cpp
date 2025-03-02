//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        // code here
        long long ans=0;
        for(long long i=0;i<n;i++ ){
            ans=ans^arr[i];
        }
        long long diff= (ans&ans-1)^ans;
        long long b1=0;
        long long b2=0;
        for(long long i=0;i<n;i++){
            if((arr[i]&diff)==0){
                b1=b1^arr[i];
            }else{
                b2=b2^arr[i];
            }
        }
        if(b1>b2){
            return {b1,b2};
        }
        return {b2,b1};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends