class Solution{
    public:
    void toposort(vector<int>&visited,stack<char>&stck,int i,vector<vector<int>>&graph,int k)
    {
        visited[i] = 1;
        for(int j=0;j<k;j++)
        {
            if(visited[j] == 0 && graph[i][j]==1)
            {
                toposort(visited,stck,j,graph,k);
            }
        }
        stck.push(i+97);
    }
    string findOrder(string dict[], int n, int k) {
        vector<vector<int>>graph(k,vector<int>(k,0));
        int i,j;
        for(i=0;i<k;i++)
        {
           graph[i][i]=1;
        }
        for(i=1;i<n;i++)
        {
            int l = min(dict[i].length(),dict[i-1].length());
            j=0;
            while(j<l && dict[i][j] == dict[i-1][j])j++;
          
            if(j<l)
            {
                //   if(i==n-1)cout<<j<<endl;
                graph[(int)(dict[i-1][j])-97][(int)(dict[i][j])-97]=1;
            }
        }
        // for(i=0;i<k;i++)
        // {
        //     for(j=0;j<k;j++)cout<<graph[i][j]<<" ";
        //     cout<<"\n";
        // }
        stack<char> stck;
        vector<int>visited(k,0);
        for(i=0;i<k;i++)
        {
            if(visited[i]==0)
              toposort(visited,stck,i,graph,k);
        }
        string ans = "";
        while(!stck.empty())
        {
            ans = ans + stck.top();
            stck.pop();
        }
    //   cout<<ans;
        return ans;
        }
        
    
};
