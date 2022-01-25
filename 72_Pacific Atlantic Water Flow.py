class Solution:
    def dfs(self,check_i,check_j,prev_ht,m,n,ouc,hts):
        if check_i not in range(m) or check_j not in range(n):
            return
        elif ouc[check_i][check_j]:
            return
        elif hts[check_i][check_j] < prev_ht:
            return 
        else:
            ouc[check_i][check_j] = True
            prev_ht = hts[check_i][check_j]
            self.dfs(check_i-1,check_j,prev_ht,m,n,ouc,hts)
            self.dfs(check_i,check_j-1,prev_ht,m,n,ouc,hts)
            self.dfs(check_i+1,check_j,prev_ht,m,n,ouc,hts)
            self.dfs(check_i,check_j+1,prev_ht,m,n,ouc,hts)
            
            
    def pacificAtlantic(self, hts: List[List[int]]) -> List[List[int]]:
        m = len(hts)
        n = len(hts[0])
        pac_poss = [[False for i in range(n)] for j in range(m)]
        atl_poss = [[False for i in range(n)] for j in range(m)]
        for i in range(m):
            self.dfs(i,0,hts[i][0],m,n,pac_poss,hts)
            self.dfs(i,n-1,hts[i][n-1],m,n,atl_poss,hts)
        for j in range(n):
            self.dfs(0,j,hts[0][j],m,n,pac_poss,hts)
            self.dfs(m-1,j,hts[m-1][j],m,n,atl_poss,hts)
        ans = []
        for i in range(m):
            for j in range(n):
                if pac_poss[i][j] and atl_poss[i][j]:
                    ans.append([i,j])
        return ans
