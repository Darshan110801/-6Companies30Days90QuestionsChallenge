class Solution {
public:
    bool isPossible(int eating_speed,vector<int>&piles,int h)
    {
        int hours=0;
        for(int pile :piles)
        {
           if(pile %eating_speed == 0) hours+=pile/eating_speed;
           else hours+=pile/eating_speed+1;
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
                int hi = 1000000000;
        int lo = 1;
        int ans = -1;
        while(lo <= hi)
        {
            int mid = (lo+hi)/2;
            if(isPossible(mid,piles,h))
            {
                ans = mid;
                hi = mid-1;
            }
            else
            {
                lo = mid+1;
            }
        }
        return ans;
    }
};
