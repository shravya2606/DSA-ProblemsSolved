class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        unordered_map<int, int> mp;
        
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto k : mp)
        {
            if(k.second %=2)
            {
                return k.first;
            }
        }
        return -1;
    }
};