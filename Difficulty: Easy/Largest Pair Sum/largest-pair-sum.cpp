//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int res = 0;
        res = arr[n-1] + arr[n-2];
        return res;
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
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends