//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// You need to complete this function.
// Function to check if there is a pair with the given sum in the array.
int sumExists(vector<int>& arr, int sum) {
    // Your code here.
    int n = arr.size();
    unordered_set<int> hashSet;
    for(int i = 0; i < n;i++)
    {
        int complement = sum - arr[i];
        
        if(hashSet.find(complement) != hashSet.end())
        {
            return 1;
        }
        hashSet.insert(arr[i]);
    }
    return 0;
    
    
}


//{ Driver Code Starts.

int main() {

    int testcases;
    cin >> testcases;
    cin.ignore();
    while (testcases--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        int num;
        vector<int> arr;
        while (ss >> num) {
            arr.push_back(num);
        }
        string line2;
        getline(cin, line2);
        stringstream ss1(line2);
        vector<int> arr2;
        while (ss1 >> num) {
            arr2.push_back(num);
        }

        int sum = arr2[0];

        cout << sumExists(arr, sum) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends