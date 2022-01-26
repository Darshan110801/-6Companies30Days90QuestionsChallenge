class Solution
{
    public:
    int dp[100][100];
    int NumberOfPath(int a, int b)
    {
        if(a==1 || b == 1)return 1;
        else return dp[a][b] = NumberOfPath(a-1,b)+NumberOfPath(a,b-1);
    }
};
