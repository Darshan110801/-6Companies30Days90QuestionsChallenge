class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string>ans;
    void helper(vector<string>&dialer,int a[],int n,string str,int uc)
    {
       if(uc == n){
           ans.push_back(str);
       }
       else
       {
           for(int i=0;i<dialer[a[uc]].size();i++)
           {
               string c="";
               c = c + (dialer[a[uc]][i]);
               helper(dialer,a,n,str+c,uc+1);
           }
       }
    }
    vector<string> possibleWords(int a[], int N)
    {
        ans.clear();
        vector<string> dialer = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        helper(dialer,a,N,"",0);
        return ans;
    }
};
