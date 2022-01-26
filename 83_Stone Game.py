class Solution:
    def stoneGame(self, piles: List[int]) -> bool:
        n = len(piles)
        dp = [[-1 for i in range(n)] for j in range(n)]
        def helper(l,h):
            if l>h:
                return 0
            elif l==h:
                return piles[l]
            elif dp[l][h] != -1:
                return dp[l][h]
            else:
                dp[l][h] = max([
                                piles[l]+min([helper(l+2,h),helper(l+1,h-1)]),
                                piles[h]+min([helper(l,h-2),helper(l+1,h-1)])  
                           ])
                return dp[l][h]
        helper(0,n-1)
        return dp[0][n-1] > sum(piles)//2
        
