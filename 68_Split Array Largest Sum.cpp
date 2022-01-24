class Solution {
public:
      bool isPossible(vector<int>& nums,int n,int days,int max_cargo)
    {
        int cur_day = 1;
        int cur_ind_tc = 0;
        int cur_cargo =0;
        while(cur_ind_tc < n && cur_day <=days)
        {
            if(nums[cur_ind_tc] > max_cargo) return false;
            if(cur_cargo+nums[cur_ind_tc] <= max_cargo)
            {
                cur_cargo += nums[cur_ind_tc];
                cur_ind_tc++;
            }
            else
            {
                cur_day++;
                cur_cargo = nums[cur_ind_tc];
                cur_ind_tc++;
            }
        }
        return cur_day <= days;
    }
    int splitArray(vector<int>& nums, int m) {
        int  l = 0;
        int h = INT_MAX-10;
        int ans = -1;
        int mid;
        int n = nums.size();
        while(l<=h)
        {
            mid = (l+h)/2;
            if(isPossible(nums,n,m,mid))
            {
                ans = mid;
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        return ans;
    }
};
