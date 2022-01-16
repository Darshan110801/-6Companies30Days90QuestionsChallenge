class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int i;
        int l = str.length();
        int flag =0;
        int start = -1;
        int num_start =0;
        if(str[0] =='-') num_start = 1;
        for(i=num_start;i<l;i++)
        {
            if(!(str[i] >='0' &&str[i]<='9')){
                flag = 1;
            }
            else if(start == -1 && flag==0 && str[i] != '0')
            {
                start = i;
            }
        }
        if(flag) return -1;
        int ans =0 ;
        for(i=start;i<l;i++)
        {
            ans = ans*10+(str[i]-'0');
        }
        return num_start==0?ans:-1*ans;
    }
};
