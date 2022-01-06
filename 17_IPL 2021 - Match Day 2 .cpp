class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
       multiset<int,greater<int>>ms;
       vector<int> ret;
       for(int i=0;i<n;i++)
       {
           if(i < k)
            ms.insert(arr[i]);
           else{
               ms.erase(ms.find(arr[i-k]));
               ms.insert(arr[i]);
           }
           if(i>=k-1)
           {
               ret.push_back(*(ms.begin()));
           }
       }
       return ret;
    }
};
