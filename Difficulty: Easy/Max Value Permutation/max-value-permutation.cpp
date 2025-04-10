//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        int n = arr.size();
        sort(arr.begin(), arr.end());
        long long ans = 0;
        int mod = 1e9+7;
        for(int i = 0; i < n;i++)
        {
             ans = (ans + (arr[i] * 1LL * i) % mod) % mod;
        }
       return (int)ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.maxValue(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends