//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        int n = arr.size();
        unordered_map<int,int> mp;
        
        for(int i = 0; i < n;i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto it:arr)
        {
            if(mp[it] == 1)
            {
                return it;
            }
        }
        return 0;
        
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.firstNonRepeating(nums) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends