//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        int n = s.length();
        unordered_map<char, int> freqMap;
        
        for(int i = 0; i < n;i++)
        {
            if(freqMap[s[i]]==1)
            {
                return string(1, s[i]);
            }
            freqMap[s[i]]++;
        }
        
        return "-1";
    }
};


//{ Driver Code Starts.
//    Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.firstRepChar(str) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends