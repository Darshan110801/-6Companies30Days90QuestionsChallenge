class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int n = nums.size();
        int ans = INT_MAX;
        int start_index = 0;
        int sum = 0;
        int i  = 0 ;
        while(i<n)
        {
            sum += nums[i];
            while(sum >= target)
            {
              ans = min(ans,i-start_index+1);
                sum-=nums[start_index++];
            }
            i++;
        }
        if(ans == INT_MAX) return 0;else return ans;
    }
}
