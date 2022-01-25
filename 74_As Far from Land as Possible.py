class Solution:
    def maxDistance(self, grid: List[List[int]]) -> int:
        MX = 1000000000
        q = deque()
        n = len(grid[0])
        dp = [[MX for i in range(n)]for j in range(n)]
        for i in range(n):
            for j in range(n):
                if grid[i][j] == 1:
                    dp[i][j] = 0
                    q.append((i,j,))
        if len(q) == 0 or len(q) == n*n:
            return -1
        else:
            while len(q) > 0:
                k,l = q.popleft()
                for i,j in ((k+1,l,),(k-1,l,),(k,l+1,),(k,l-1,)):
                    if i in range(n) and j in range(n):
                        if 1+dp[k][l] < dp[i][j]:
                            dp[i][j] = 1+dp[k][l]
                            q.append((i,j,))
        
        return max([x for row in dp for x in row])
            
