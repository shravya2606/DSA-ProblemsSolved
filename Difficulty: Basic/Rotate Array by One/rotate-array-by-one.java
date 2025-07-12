// // User function Template for Java

class Solution {
    public void rotate(int[] arr) {
        // code here
        int n= arr.length;
        int last = arr[n-1];
        
        if(n <= 1)
        {
            return;
        }
        
        for(int i = n-1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = last;
        
    }
}