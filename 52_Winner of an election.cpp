class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int> mp;
        pair<string,int> ans;
        int max_votes = INT_MIN;
        for(int i=0;i<n;i++)
        {
            string name = arr[i];
            if(mp.find(name)==mp.end())mp[name]=1;
            else mp[name] = mp[name]+1;
            if(mp[name] > max_votes)
            {
                ans.first = name;
                ans.second = mp[name];
                max_votes = mp[name];
            }
            else if(mp[name] == max_votes)
            {
                if(name < ans.first)ans.first = name;
            }
        }
        return {ans.first,to_string(ans.second)};
        
      }
};
