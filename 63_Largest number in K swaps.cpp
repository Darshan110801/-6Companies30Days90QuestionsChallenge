class Solution
{
    public:
    //Function to find the largest number after k swaps.
    string ms;
  
    void swap(string&s,int i,int j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] =temp;
    }
    void helper(string str,int k,int init,int l)
    {
        if(k<=0 || init >= l) return;
        else
        {
          int max_ind = init;
          char mx  = str[init];
          for( int i=init+1;i<l;i++) if(str[i] >mx) {mx = str[i];max_ind = i;}
          if(max_ind == init) helper(str,k,init+1,l);
          for(int i=init+1;i<l;i++)if(str[i] == mx){
              swap(str,init,i);
              if(str > ms)
                  ms = str;
              helper(str,k-1,init+1,l);swap(str,init,i);}
        }
    }
    string findMaximumNum(string str, int k)
    {
        ms = str;
      
        int l=str.length();
    //   vector<vector<bool>> swapped(l,vector<bool>(l,false));
      helper(str,k,0,l);
      return ms;
    }
  
};
