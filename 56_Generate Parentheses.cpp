class Solution
{
    public:
   
    vector<string> AllParenthesis(int n) 
    {
       vector<string> ret;
       if(n == 0)
       {
           ret.push_back("");
       }
       else{
           for(int i = 0;i<n;i++)
           {
               vector<string>ret1 = AllParenthesis(i);
               vector<string>ret2 = AllParenthesis(n-1-i);
               int l1 = ret1.size(),l2 = ret2.size();
               for(int i =0; i<l1;i++)
               {
                   for(int j = 0;j<l2;j++)
                   {
                       ret.push_back("("+ret1[i]+")"+ret2[j]);
                   }
               }
           }
       }
       return ret;
    }
};
