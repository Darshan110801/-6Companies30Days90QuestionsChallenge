class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int max = INT_MIN;
        vector<int>ret;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i] >= max)
            {
                ret.push_back(a[i]);
                max = a[i];
            }
        }
        reverse(ret.begin(),ret.end());
        return ret;
        
    }
};
