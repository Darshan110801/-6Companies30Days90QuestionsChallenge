class Solution {
	public:
		
		int CountWays(string str){
		    int l = str.length();
		    vector<int>dp(l+1,0);
		    if(str[0] == '0') return 0;
		    dp[0] = 1;
		    dp[1] = 1;
		    for(int i=1;i<l;i++)
		    {
		        int prev1=0,prev2=0;
		        if(str[i] != '0') prev1 = dp[i];
		        if(str[i-1] == '1' || (str[i-1] == '2' && str[i] < '7'))
		           prev2 = dp[i-1];
		           
		        dp[i+1] = (prev1+prev2) % 1000000007;
		    }
		    return dp[l];
		    
		}

};
