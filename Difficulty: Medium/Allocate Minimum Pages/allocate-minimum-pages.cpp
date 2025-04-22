//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int isPossible(vector<int> &pages, int m, int maxPages){
      int studentCount = 1;
      int currentPages = 0;
      
      for(int i=0;i<pages.size();i++){
          
          if(pages[i]>maxPages) return false;
          
          if(currentPages + pages[i] > maxPages){
              studentCount++;
              currentPages =pages[i];
              
               if (studentCount > m) return false;
          }
          else {
                 currentPages += pages[i];
          }
      }
      return true ;
  } 
  
  
    int findPages(vector<int> &pages, int m) {
        if(pages.size() < m) return -1 ;
        
        int low = *max_element(pages.begin(),pages.end());
        
        int high = accumulate(pages.begin(), pages.end(),0);
        int result = high;
        
        while(low<=high){
            
            int mid = low + (high-low)/2;
            if(isPossible(pages,m,mid)){
                result = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return result ;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends