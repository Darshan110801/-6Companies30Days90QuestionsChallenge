class Solution {
public:
    bool cycleHere(vector<vector<bool>>& a,int n,int i,vector<bool>&vis,vector<bool>&onstack)
    {
        vis[i] = true;
        onstack[i] = true;
        for(int j =0;j<n;j++)
        {
            if(a[i][j])
            {
                if(onstack[j]) return true;
                else if(!vis[j] && cycleHere(a,n,j,vis,onstack)) return true;   
            }
        }
        onstack[i]=false;
        return false;
    }
       void toposort(vector<vector<bool>>& a,int n,int i,vector<bool>&vis,stack<int>&ans_stack)
       {
           vis[i] = true;
           int j;
           for(j=0;j<n;j++)if(a[i][j] && (!vis[j]))
           {
               toposort(a,n,j,vis,ans_stack);
           }
           ans_stack.push(i);
       }
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<bool>vis(n,false);
        vector<bool>onstack(n,false);
        vector<vector<bool>> a(n,vector<bool>(n,false));
        int i,j;
        for(i=0;i<p.size();i++)
        {
            a[p[i][1]][p[i][0]] = true;
        }
        vector<int> ans={};
        for(i=0;i<n;i++)
        {
            if(!vis[i] && cycleHere(a,n,i,vis,onstack)) return ans;
        }
        cout<<" YAHAPE KAISE\n";
        stack<int>ans_stack;
        for(i=0;i<n;i++) vis[i] = false;
        for(i=0;i<n;i++)
        {
            if(!vis[i]) toposort(a,n,i,vis,ans_stack);
        }
        while(!ans_stack.empty()){ans.push_back(ans_stack.top());ans_stack.pop();}
        return ans;
        
    }
};
