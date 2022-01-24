class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n= grid.size();
        vector<int> last_1s_pos(n,-1);
        int i,j,k;
        for(i=0;i<n;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                if(grid[i][j] == 1)
                {
                    last_1s_pos[i] = j;
                    break;
                }
            }
        }
        int swaps = 0;
        for(i=0;i<n;i++)
        {
            if(last_1s_pos[i] > i)
            {
                j=i+1;
                bool found = false;
                while(j<n && (!found))
                {
                    if(last_1s_pos[j]<=i)
                    {
                        found = true;
                        swaps += (j-i);
                        for(k=j-1;k>=i;k--)
                        {
                            last_1s_pos[k+1] = last_1s_pos[k];
                        }
                    }
                    else j++;
                }
                if(!found) return -1;
            }
        }
        return swaps;
        
        
    }
};
