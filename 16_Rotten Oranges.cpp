class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        int i,j;
        queue<pair<int,int>>rottens;
        int time = 0;
        int fresh_there = 0;
        for(i=0;i<m;i++)
        {
            for(j=0; j<n;j++)
            {
                if(a[i][j] == 1)
                     fresh_there = 1;
                else if(a[i][j] ==2)
                    rottens.push(make_pair(i,j));
        
            }
        }
        if(fresh_there ==0 )return 0;
        while(!rottens.empty())
        {
            int prev_size = rottens.size();
            for(int k=0;k<prev_size;k++)
            {
                pair<int,int>ptc = rottens.front();
                i = ptc.first;
                j = ptc.second;
                rottens.pop();
                if(i+1<m && a[i+1][j] == 1)
                {
                    a[i+1][j] = 2;
                    rottens.push(make_pair(i+1,j));
                }
                 if(j+1<n && a[i][j+1] == 1)
                {
                    a[i][j+1] = 2;
                    rottens.push(make_pair(i,j+1));
                }
                if(i-1>=0 && a[i-1][j] ==1)
                 {
                    a[i-1][j] = 2;
                    rottens.push(make_pair(i-1,j));
                 }
                if(j-1>=0 && a[i][j-1] ==1)
                 {
                    a[i][j-1] = 2;
                    rottens.push(make_pair(i,j-1));
                 }
            }
            time++;
        }
         fresh_there = 0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j] == 1)
                     fresh_there = 1;
               
        
            }
        }
        if(fresh_there) return -1;
        else return time-1;
        
        
    }
};
