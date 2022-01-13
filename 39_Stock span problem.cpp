class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        stack<pair<int,int>> val_info;
        int i;
        vector<int> ret;
        for(i=0;i<n;i++)
        {
            while(!val_info.empty() && val_info.top().second <= price[i] )
               val_info.pop();
            if(val_info.empty())
            {
                ret.push_back(i+1);
            }
            else
            {
                ret.push_back(i-val_info.top().first);
            }
            val_info.push(make_pair(i,price[i]));
        }
        return ret;
    }
};
