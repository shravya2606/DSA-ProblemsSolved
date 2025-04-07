class Solution:
    def minChar(self, s):
        #Write your code here
        
        rev = s[::-1]
        combine = s + "#" + rev
        n = len(combine)
        lps = [0]*n
        
        for i in range(1,n):
            j = lps[i-1]
            while j > 0 and combine[i] != combine[j]:
                j = lps[j-1]
            if combine[i] == combine[j]:
                j+=1
            lps[i] = j
        return len(s)-lps[-1]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    for _ in range(int(input())):
        s = input()
        obj = Solution()
        ans = obj.minChar(s)
        print(ans)
        print("~")

# } Driver Code Ends