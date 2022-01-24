class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>&visited,int n,int i)
    {
        visited[i] = true;
        for(int j=0;j<n;j++)
        {
            if(isConnected[i][j] == 1 && (!visited[j]))
                dfs(isConnected,visited,n,j);
        }
    }
    int findCircleNum(vector<vector<int>>& isconnected) {
        int n = isconnected.size();
        vector<bool> visited(n,false);
        int provinces = 0;
        for(int i=0;i<n;i++)
        {
           
                if(!visited[i])
                {
                    dfs(isconnected,visited,n,i);
                    provinces++;
                }
         
        }
        return provinces;
    }
};
