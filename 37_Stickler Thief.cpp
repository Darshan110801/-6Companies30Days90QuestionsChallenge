class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int a[], int n)
    {
        int t1 = a[0];
        int t2 = max(a[0],a[1]);
        if(n ==1) return t1; if(n==2)return t2;
        int ithterm;
        for(int i=3;i<=n;i++)
        {
            ithterm = max(a[i-1]+t1,t2);
            t1=t2;
            t2=ithterm;
        }
        return ithterm;
    }
};
