class Solution:
    def getMoneyAmount(self, n: int) -> int:
        dp = [[-1 for i in range(n+1)] for j in range(n+1)]
        def helper(l,h):
            if(l >= h):
                return 0
            elif dp[l][h] != -1:
                return dp[l][h]
            else:
                dp[l][h]=min([max([helper(l,i-1)+i,helper(i+1,h)+i]) for i in range(l,h+1)])
                return dp[l][h]
        return helper(1,n)
