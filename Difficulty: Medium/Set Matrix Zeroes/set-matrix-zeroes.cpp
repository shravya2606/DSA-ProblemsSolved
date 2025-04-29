//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
         int i,j;
        int r=mat.size(),c=mat[0].size();
        vector<int> row(r,0);
        vector<int> col(c,0);
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(mat[i][j] == 0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(i=0;i<r;i++)
        {
            if(row[i] == 1)
            {
                for(j=0;j<c;j++)
                {
                    mat[i][j]=0;
                }
            }
        }
        
        for(i=0;i<c;i++)
        {
            if(col[i] == 1)
            {
                for(j=0;j<r;j++)
                {
                    mat[j][i]=0;
                }
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends