//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// Complete this function
// Function to check if two numbers in the array have sum equal to the given
// sum.
int sumExists(vector<int>& arr, int sum) {
    // Your code here
     unordered_set<int> hashSet;
     int N = arr.size();
    
    for(int i = 0; i<N;i++)
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