class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        set<vector<int>> sol;
        vector<vector<int>> ans;
 
        vector<int> v;
        sort(arr.begin(),arr.end());
        int i,j,z,y,n=arr.size();
        if(n<4)
         return ans;
        for(i=0;i<n-3;i++)
        {
            for(j=i+1;j<n-2;j++)
            {
                z=j+1;
                y=n-1;
                while(z<y)
                {
                  if(arr[i]+arr[j]+arr[z]+arr[y]==k)
                  {
                    v.push_back(arr[i]);
                    v.push_back(arr[j]);  
                    v.push_back(arr[z]);
                    v.push_back(arr[y]);
                  
                    sol.insert(v);
                    v.clear();
                    
                    ++z;
                    --y;
                  }
                  else if(arr[i]+arr[j]+arr[z]+arr[y]>k)
                    --y;
                  else
                    ++z;
                }
            }
        }
        ans.insert(ans.begin(), sol.begin(), sol.end());
        return ans;
    }
};
