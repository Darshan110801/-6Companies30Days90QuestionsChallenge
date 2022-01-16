class Solution{
    public:
    string amendSentence (string s)
    {
        string ret="";
        int l = s.length();
        for(int i=0;i<l;i++){
            if(i==0 && s[i] <= 'Z')
            {
                ret.push_back(s[i]+32);
            }
            else if(s[i] <= 'Z')
            {
                ret.push_back(' ');
                ret.push_back(s[i]+32);
            }
            else
            {
                ret.push_back(s[i]);
            }
        }
        return ret;
    }
    
};
