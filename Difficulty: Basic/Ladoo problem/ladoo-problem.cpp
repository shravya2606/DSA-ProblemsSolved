//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution {
  public:
    int divideLadoo(int N ,int A[]) {
        // code here
        unordered_set<int> newSet;
        for(int i = 0; i < N;i++)
        {
            newSet.insert(A[i]);
        }
        return newSet.size();
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.divideLadoo(N,A) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends