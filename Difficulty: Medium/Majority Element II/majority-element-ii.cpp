//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        vector<int> ans;
        int n = arr.size();
        int count = 0;
        
        int ele1 = -1;
        int ele2 = -1;
        
        int cnt1 = 0;
        int cnt2 = 0;
        for(int ele: arr)
        {
            if(ele == ele1)
            {
                cnt1++;
            }
            else if(ele == ele2)
            {
                cnt2++;
            }
            else if(cnt1 == 0)
            {
                ele1 = ele;
                cnt1 = 1;
            }
            else if(cnt2 == 0){
                ele2 = ele;
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        vector<int> res;
        cnt1 = 0;
        cnt2 = 0;
        for(int ele:arr){
            if(ele == ele1) {
                cnt1++;}
            else if(ele == ele2){
                cnt2++;}
        }
        if(cnt1 > n/3)
        {
            ans.push_back(ele1);
        }
        if((cnt2 > n/3) && ele1 != ele2)
        {
            ans.push_back(ele2);
        }
        sort(ans.begin(), ans.end());
        
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends