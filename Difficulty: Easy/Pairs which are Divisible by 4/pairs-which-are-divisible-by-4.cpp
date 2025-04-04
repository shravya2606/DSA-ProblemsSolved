//{ Driver Code Starts
// C++ Program to count pairs whose sum divisible
// by '4'
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int count4Divisibiles(vector<int>& arr) {
        // Complete the function
        
        int count{0};
        int n = arr.size();
        unordered_map<int,int> mp;
        
        for(int i = 0; i < n;i++)
        {
            arr[i] = arr[i]%4;
        }
         for(int i = 0; i < n;i++)
        {
            if(mp.find((4-arr[i])%4) != mp.end())
            {
                count = count + mp[(4-arr[i])%4];
            }
            mp[arr[i]%4]++;
        }
        return count;
        
    }
};


//{ Driver Code Starts.
//   Driver code
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
        Solution ob;
        cout << ob.count4Divisibiles(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends