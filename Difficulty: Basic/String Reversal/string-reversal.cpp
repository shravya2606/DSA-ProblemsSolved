//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    
cout << "~" << "\n";
}
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    string ans;
    unordered_map<char, int> mp;
    int n = s.length();
    
     for(int i = n-1; i>=0;i--)
    {
         mp[s[i]]++;
        if( mp[s[i]] == 1 && s[i] != ' ')
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}