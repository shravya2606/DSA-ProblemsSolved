//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int a = in.nextInt();
            int b = in.nextInt();
            int k = in.nextInt();
            Solution ob = new Solution();
            System.out.println(ob.kthDigit(a, b, k));
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    static long kthDigit(int a, int b, int k) {
        // code here
        long result = 1;
        for(int i = 0; i < b;i++)
        {
            result = result * a;
        }
        for(int i = 1; i < k;i++)
        {
            result = result/10;
        }
        return result % 10;
    }
}