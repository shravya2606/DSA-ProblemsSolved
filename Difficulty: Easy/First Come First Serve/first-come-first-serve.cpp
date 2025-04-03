//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    int firstElement(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n;i++)
        {
            mp[arr[i]]++;
            
             
        }
        for(int i = 0; i < n;i++)
        {
        if(mp[arr[i]] == k)
            {
                return arr[i];
            }
        }
       return -1; 
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.firstElement(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends