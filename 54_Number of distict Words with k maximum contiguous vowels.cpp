class Solution:
    
    def helper(self, N,k,K):
        MOD = 1000000007
        if self.dp[N][k] != -1:
            return self.dp[N][k]
        if N==0:
            return 1
        ans = (21 * (self.helper(N-1,K,K))) % MOD
        if k > 0:
            ans = (ans + (5 * self.helper(N-1,k-1,K)%MOD) ) % MOD
        self.dp[N][k] = ans % MOD
        return self.dp[N][k]
    def kvowelwords(self, N,K):
        self.dp = [[-1 for i in range(K+1)]for j in range(N+1)]
        a=self.helper(N,K,K)
        return a

