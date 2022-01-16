class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
      int i = 0;
      int sum = 0;
      int j=0;
      while(j<n)
      {
          sum = sum +arr[j++];
          if(sum==s)
          {
              return {i+1,j};
          }
          else if(sum>s)
          {
              while(i<j && sum > s)
              {
                  sum-=arr[i++];
              }
              if(sum==s)return {i+1,j};
          }
      }
       return {-1};
    }
   
};
