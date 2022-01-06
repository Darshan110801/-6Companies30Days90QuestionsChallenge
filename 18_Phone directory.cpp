
class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        vector<int> similar_till(n,-1);
       
        sort(contact,contact+n);
         vector<int> lens(n,0);
        for(int i=0;i<n;i++) lens[i] = contact[i].length();
        int i,l=s.length(),j;
        vector<vector<string>>ret;
        for(i=0;i<l;i++){
            vector<string>vcp;
            //if(i==3) cout<<contact[0]<<" "<<similar_till[0] <<" "<<contact[1]<<" "<<similar_till[1]<<endl;
            for(j=0;j<n;j++)
            {
                if((j==0 || (contact[j] != contact[j-1])) && similar_till[j] == i-1 && i < lens[j] && s[i] == contact[j][i])
                {
                    similar_till[j] = i;
                    vcp.push_back(contact[j]);
                }
            }
            if(vcp.size()==0)vcp.push_back("0");
            ret.push_back(vcp);
        }
        return ret;
    }
};
