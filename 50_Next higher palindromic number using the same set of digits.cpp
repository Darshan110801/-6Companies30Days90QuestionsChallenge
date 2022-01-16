class Solution{
  public:
    string next(string s)
    {
        int i=1;
       if(next_permutation(s.begin(),s.end()))
       {
           return s;
       }
       else
       {
           return "-1";
       }
        
    }
    string nextPalin(string N) {
        int l = N.length();
       string str = next(N.substr(0,l/2));
       if(str == "-1") return str;
       string rstr =  str;
       reverse(rstr.begin(),rstr.end());
       if(l%2==1) 
       {
           return str+N[l/2]+rstr;
       }
       else
       {
           return str+rstr;
       }
    }
};
