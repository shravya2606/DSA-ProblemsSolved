#User function Template for python3

class Solution:
    def search(self, pat, txt):
        # code here
        i = 0
        j = len(pat)
        
        ans = []
        
        while(i < j) and j <= len(s):
            if(s[i:j]) == pat:
                ans.append(i)
            j = j + 1
            i = i + 1
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        patt = input().strip()
        ob = Solution()
        ans = ob.search(patt, s)
        if len(ans) == 0:
            print("[]", end="")
        for value in ans:
            print(value, end=' ')
        print()

# } Driver Code Ends