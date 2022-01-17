class Solution:
    def findMax(self,arr,l,h):
        if self.dp[l][h] != -1:
            return self.dp[l][h]
        if l > h:
            return 0
        elif l == h:
            return arr[l]
        else:
            self.dp[l][h] = max(
                arr[l]+min(self.findMax(arr,l+1,h-1),self.findMax(arr,l+2,h)),
                arr[h]+min(self.findMax(arr,l+1,h-1),self.findMax(arr,l,h-2))
                
                )
            return self.dp[l][h]
            
    def maxCoins(self,arr,n):
        self.dp = [[-1 for i in range(n+1)]for j in range(n+1)]
        return self.findMax(arr,0,n-1)
        
