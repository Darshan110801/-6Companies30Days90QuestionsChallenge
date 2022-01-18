class Solution{
    public:
   long long numOfWays(int n, int x)
    {
        int last_num = (int)pow(n,(float)1/x);
        int final_sum = n;
        vector<vector<long long int>> dp(last_num+1,vector<long long int>(final_sum+1,0));
        int i,j;
        for(i=0;i<=last_num;i++)
        {
            for(j=0;j<=final_sum;j++)
            {
               
               if(j == 0) dp[i][j] = 1;
                else if(i==0) dp[i][j] = 0;
                else{
                    int sum_to_cons =  j;
                    int pow_to_cons = (int)pow(i,x);
                    if(sum_to_cons>=pow_to_cons)
                    {
                        dp[i][j] = dp[i-1][j]+dp[i-1][j-pow_to_cons];
                    }
                    else
                    {
                        dp[i][j] = dp[i-1][j];
                    }
                    
                }
            }
        }
        return dp[last_num][final_sum];
    }
};
