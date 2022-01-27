class Solution {
public:
    struct comparator{
        bool operator()(string& s1,string& s2)
        {
            int l1 = s1.length();int l2  = s2.length();
            if(l1 == l2)
            {
                return s1 > s2;
            }
            else if (l1 < l2)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {
        
        int n = nums.size();
        priority_queue<string,vector<string>,comparator>pq;
        for(int i=0;i<n;i++)
        {
            if(pq.size() <= k-1) pq.push(nums[i]);
            else {
                pq.push(nums[i]);
                pq.pop();
            }
        }
        return pq.top();
    }
};
