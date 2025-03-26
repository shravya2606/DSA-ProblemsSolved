//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

//User function Template for C++
class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        // Write Your Code here
        
        vector<int> v;
        for(int i = L; i<=R;i++)
        {
        unordered_map<int, int> freq;
        int num = i;
        while(num!= 0)
        {
            freq[num%10]++;
            num = num/10;
        }
        int count = 0;
        for(auto it:freq)
        {
            if(it.second > 1)
            {
                count++;
            }
            
        }
        if(count == 0)
        {
            v.push_back(i);
        }
    }
    return v;
    
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends