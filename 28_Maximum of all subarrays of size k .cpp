class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        multiset<int,greater<int>>ms;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(i < k-1){
                ms.insert(arr[i]);
            }
            else if(i == k-1)
            {
                ms.insert(arr[i]);
                ans.push_back(*(ms.begin()));
            }
            else
            {
              
                ms.insert(arr[i]);
                  ms.erase(ms.find(arr[i-k]));
                ans.push_back(*(ms.begin()));
            }
            
        }
        return ans;
        
    }
};
