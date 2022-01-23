/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
   
    int findInMountainArray(int target, MountainArray &a) {
        int peak = -1;
        int len = a.length();
        int lo=1;
        int hi = len-2;
        while(lo<=hi && peak == -1)
        {
            int mid = (lo+hi)/2;
            int mi = a.get(mid);
            int mi1 = a.get(mid+1);
            int mi_1 = a.get(mid-1);
            if(mi >= mi_1 && mi >= mi1)
            {
                peak = mid;
            }
            else
            {
                if(mi > mi_1)
                {
                    lo = mid+1;
                }
                else if (mi <mi_1)
                {
                    hi = mid-1;
                }
            }
        }
         int ans = -1;
        lo = 0;
         hi = peak;
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            int mi = a.get(mid);
            if(mi== target)
            {
                ans = mid;
                hi = mid-1;
            }
            else if(mi> target)
            {
                hi = mid-1;
            }
            else
            {
                lo = mid+1;
            }
        }
        if(ans !=-1) return ans;
          lo = peak+1;
        hi = len-1;
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            int mi = a.get(mid);

            if(mi== target)
            {
                ans = mid;
                hi = mid-1;
            }
            else if(mi> target)
            {
                lo = mid+1;
            }
            else
            {
                hi = mid-1;
            }
        }
        return ans;
        
    }
};
