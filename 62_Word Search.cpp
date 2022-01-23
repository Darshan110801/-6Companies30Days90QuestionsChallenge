class Solution {
public:
    bool ispossible(vector<vector<char>>& board,
    int i,int j,string& word,int itc,int str_len,
    int m,int n,vector<vector<bool>> &vis)
    {
        // cout<<i<<' '<<j<<' '<<str_len<<';';
 
        if(itc>=str_len) return true;
        vis[i][j] = true;
        
        for(int k=i-1;k<=i+1;k++)
        {
            for(int l=j-1;l<=j+1;l++)
            {
                if(((k==i) !=(l==j)) && 
                    (k>=0 && k<m && l<n && l>=0) &&
                    vis[k][l] == false &&
                    (board[k][l] == word[itc]))
                {
                    if(ispossible(board,k,l,word,itc+1,str_len,m,n,vis)) return true;
                }
            }
        }
        vis[i][j] = false;
        return false;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        int i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(board[i][j] == word[0])
                {
                    if(ispossible(board,i,j,word,1,word.length(),m,n,vis))return true;
                }
            }
        }
        return false;
    }
};
