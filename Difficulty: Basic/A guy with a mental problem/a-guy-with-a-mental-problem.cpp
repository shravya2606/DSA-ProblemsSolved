class Solution {
  public:
    int minTime(vector<int>& arr1, vector<int>& arr2) {
        // code here.
        
        int n1 = 0;
        int n2 = 0;
        
        for(int i = 0; i < arr1.size(); i++)
        {
            if(i%2 == 0){
            n1+= arr1[i];
            }
            else
            { 
                n1 += arr2[i];
            }
        }
         for(int i = 0; i < arr2.size(); i++)
        {
            if(i%2 == 0){
            n2 += arr2[i];
            }
            else
            { 
                n2 += arr1[i];
            }
        }
        return min(n1, n2);
    }
};
