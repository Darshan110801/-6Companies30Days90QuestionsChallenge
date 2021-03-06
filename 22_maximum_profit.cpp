
class Solution {
 public:
   int maxProfit(int k, int n, int a[]) {
       int dp[k+1][n];
       int i,j;
       for(i=0;i<=k;i++) for(j=0;j<n;j++) dp[i][j] = 0;
       for(int i=1;i<=k;i++)
       {
           int mx=INT_MIN;
           for(int j=1;j<n;j++)
           {
               mx=max(mx,dp[i-1][j-1]-a[j-1]);
               dp[i][j]=max(dp[i][j-1],mx+a[j]);
           }
       }
       return dp[k][n-1];
   }
};
