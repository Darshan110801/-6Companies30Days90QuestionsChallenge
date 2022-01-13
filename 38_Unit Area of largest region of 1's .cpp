class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int findarea(vector<vector<int>>& grid,int i,int j,int m,int n)
    {
        int ans = 1;
        grid[i][j]=0;
        for(int k=i-1;k<i+2;k++)
        {
            for(int l=j-1;l<j+2;l++)
            {
                if(k>=0 && k<m && l>=0 && l < n && grid[k][l])
                ans+=findarea(grid,k,l,m,n);
                
            }
        }
        return ans;
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int i,j;
        int ans = INT_MIN;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j])
                {
                    ans=max(ans,findarea(grid,i,j,m,n));
                }
            }
        }
        return ans;
    }
};
