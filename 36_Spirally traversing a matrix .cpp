class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> ans;
    void helper(vector<vector<int>>&a,int r,int c,int start)
    {
        if(r <=0 || c <= 0) return;
        else{
            // cout<<r <<" "<<c<<endl;
            int i;
            for( i = 0;i < c;i++)
            {
                ans.push_back(a[start][start+i]);
            }
            if(r==1)return;
            for(i = 1;i<r;i++)
            {
                ans.push_back(a[start+i][start+c-1]);
            }
            if(c==1) return;
            for(i = c-2;i>=0;i--)
            {
                ans.push_back(a[start+r-1][start+i]);
            }
            for(i=r-2;i>0;i--)
            {
                ans.push_back(a[start+i][start]);
            }
            helper(a,r-2,c-2,start+1);
        }
    }
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        ans.clear();
        helper(matrix,r,c,0);
        return ans;
    }
};
