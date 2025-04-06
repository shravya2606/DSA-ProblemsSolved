//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        long long int result = 0;
        int n = arr.size();
        map<long long int , int> freq;
        long long int sum = 0;
        
        freq[0]++;
        
        for(int i = 1; i <= n;i++)
        {
            sum = sum + arr[i-1];
            freq[sum]++;
            result = result + freq[sum]-1;
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findSubarray(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends