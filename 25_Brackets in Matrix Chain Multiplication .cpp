class Solution{
public:
    string ans;
    int dp[30][30];
    unordered_map<string,string> mp;
    string to_str(int i,int j){
        return to_string(i)+"_"+to_string(j);
    }
    pair<string,int> helper(int a[],int low,int high)
    {
        // cout<< low << " " << high << endl;
        if(dp[low][high] != -1){
            return make_pair(mp[to_str(low,high)],dp[low][high]);
        }
        if(low > high) {
            string ret = "";
            return make_pair(ret,0);
        }
        else if(low == high) {
            string ret;
            ret.push_back((char)(low+64));
            mp[to_str(low,high)] = ret;
            dp[low][high] = 0;
            return make_pair(ret,0);
        }
        else {
            int min_cost = INT_MAX;
            string fin_ans = "";
            for(int par_at = low;par_at <high;par_at++)
            {
                pair<string,int> lr = helper(a,low,par_at);
                pair<string,int> rr = helper(a,par_at+1,high);
                if(lr.second+rr.second+(a[low-1]*a[par_at]*a[high]) < min_cost){
                    fin_ans = "("+lr.first+rr.first+")";
                    min_cost = lr.second+rr.second+(a[low-1]*a[par_at]*a[high]);
                }
            }
            dp[low][high] = min_cost;
            mp[to_str(low,high)] = fin_ans;
            
            return make_pair(fin_ans,min_cost);
        }
    }
    string matrixChainOrder(int p[], int n){mp.clear();
        for(int i=0;i<30;i++)for(int j=0;j<30;j++) dp[i][j] = -1;
        ans = "";
        return helper(p,1,n-1).first;
    }
};
