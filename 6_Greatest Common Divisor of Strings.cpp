class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.length();
        int l2 = str2.length();
        int i = 0;
        while(i < l1 && i < l2 && str1[i]==str2[i])
        {
            i++;
        }
        string pot_sol = str1.substr(0,i);
        int pot_len = i;
        while(pot_len > 0 )
        {
            bool to_break = 0;
            int j,k;
            if(l1 % pot_len == 0 && l2 % pot_len  == 0)
            {
                for( j=0;j<l1;j++)
                {
                    if(str1[j] != pot_sol[j%pot_len])
                    {
                        to_break = 0;
                        break;
                    }
                }
                for( k=0;k<l2;k++)
                {
                    if(str2[k] != pot_sol[k%pot_len])
                    {
                        to_break = 0;
                        break;
                    }
                }
                if(j == l1 && k == l2)to_break = 1;
            }
            if(to_break) break;
            pot_len--;
            pot_sol.pop_back();
        }
        return pot_sol;
    }
};
