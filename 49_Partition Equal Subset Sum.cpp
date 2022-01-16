class Solution{
public:
    int equalPartition(int n, int arr[])
    {
        int sum = 0;
        int i,j;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum%2 == 1) return 0;
        int dp[n+1][sum+1];
        
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(j==0) dp[i][j] = 1;
                else if(i==0) dp[i][j] = 0;
                else
                {
                    dp[i][j] = dp[i-1][j];
                    if(j-arr[i-1] >=0)
                    {
                        dp[i][j] = max(dp[i][j],dp[i-1][j-arr[i-1]]);
                    }
                }
                
            }
        }
        return dp[n][sum/2];
    }
};
