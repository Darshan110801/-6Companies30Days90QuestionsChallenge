class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& ps) {
        int n = ps.size();
        int ans =0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) 
            {
                if(i!=j)
                {
                    mp[(ps[i][0]-ps[j][0])*(ps[i][0]-ps[j][0]) + (ps[i][1]-ps[j][1])*(ps[i][1]-ps[j][1])]++;
                }
            }
               for(auto it : mp)  ans+= (it.second*(it.second-1));
        mp.clear();
        }
     
        return ans;
    }
};
