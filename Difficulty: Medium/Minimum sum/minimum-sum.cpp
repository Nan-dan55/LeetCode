//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
string addStrings(string num1, string num2) {
        // Ensure num1 is the longer string for simplicity
        if (num1.length() < num2.length()) {
            swap(num1, num2);
        }

        // Pad num2 with leading zeros to match the length of num1
        while (num2.length() < num1.length()) {
            num2 = "0" + num2;
        }

        string result;
        int carry = 0;

        // Add each digit from the end to the beginning
        for (int i = num1.length() - 1; i >= 0; i--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[i] - '0';
            int sum = digit1 + digit2 + carry;
            result.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        // If there's a carry left, add it to the result
        if (carry) {
            result.push_back(carry + '0');
        }

        // The result is in reverse order, so we need to reverse it
        reverse(result.begin(), result.end());

        // Remove any leading zeros from the result
        size_t startPos = result.find_first_not_of("0");
        if (startPos != string::npos) {
            result = result.substr(startPos);
        } else {
            // If the result is all zeros (e.g., "000"), return "0"
            result = "0";
        }

        return result;
    }
    string minSum(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        string s1;
        string s2;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                s1.append(to_string(arr[i]));
                }else{
                    s2.append(to_string(arr[i]));
                }
        }
       
       return addStrings(s1,s2);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends