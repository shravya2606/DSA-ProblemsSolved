//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        int n = s.length();
        unordered_map<char, int> freqMap;
        for(int i = 0; i < n;i++)
        {
            freqMap[s[i]]++;

        }
        for(int i = 0; i < n;i++){
            if(freqMap[s[i]] > 1)
            {
                return s[i]; 
            }
        }
        return '#';
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    
cout << "~" << "\n";
}
    return 0;
}



// } Driver Code Ends