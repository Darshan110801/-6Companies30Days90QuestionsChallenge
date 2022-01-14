class Solution{
    minDifference(arr,n){
        let sum = arr.reduce((cur_sum,cur_val)=>cur_sum+cur_val,0);
        let dp = new Array(n+1);
        let i,j;
        for( i = 0;i<=n;i++)
        {
            dp[i] = new Array(sum+1);
        }
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(j===0)dp[i][j]=true;
                else if(i===0) dp[i][j] = false;
                else
                {
                    dp[i][j] = dp[i-1][j];
                    if(j-arr[i-1] >=0) dp[i][j] = dp[i][j] || dp[i-1][j-arr[i-1]];
                }
            }
        }

        if(sum %2 === 0 && dp[n][sum/2]) return 0;
        else{
            if(sum%2===0) i=j=sum/2;
            else{
                 i=Math.floor(sum/2);j=Math.floor(sum/2)+1;
                 
            } 
            while(j<=sum)
            {
                if(dp[n][j])
                {
                    
                    return j-i;
                }
                j++;
                i--;
            }
        }
    }
}
