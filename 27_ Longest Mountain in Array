class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int max_len =0;
        
        int n = arr.size();
        
        int peak;
        vector<int> smallers_on_left(n,0);
        vector<int> smallers_on_right(n,0);
        int i;
        for(i=1;i<n-1;i++)
        {
            if(arr[i] > arr[i-1])
            {
                smallers_on_left[i] = smallers_on_left[i-1]+1;
            }
            if(arr[n-i-1] > arr[n-i])
            {
                smallers_on_right[n-i-1]=smallers_on_right[n-i]+1;
            }
            
        }
       for(i=1;i<n-1;i++)
        {
           if(smallers_on_left[i]&&smallers_on_right[i])
            max_len = max(max_len,smallers_on_left[i]+smallers_on_right[i]+1);
       
        }
        return max_len;
    }
};
