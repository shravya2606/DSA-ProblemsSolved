//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char, int> charMap;
        for(int i = 0; i < s.length();i++)
        {
            charMap[s[i]]++;
        }
        for(int i = 0; i < s.length();i++)
        {
            if(charMap[s[i]] == 1)
            {
                return s[i];
            }
        }
        return '$';
    } 
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends