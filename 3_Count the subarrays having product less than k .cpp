class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int prev_ep = 0;
        int cur_ep = 0;
        long long cur_prod = 1;
        long long count = 0;
        while(cur_ep < n){
            cur_prod *= a[cur_ep];
            while(cur_prod >= k && prev_ep < n)
            {
                cur_prod /= a[prev_ep];
                prev_ep++;
            }
            count += (cur_ep-prev_ep+1);
            cur_ep++;
        }
        return count;
    }
};
