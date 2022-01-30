class Solution {
public:
    int divide(int dividend, int divisor) {
        int temp=1,res=0,sign=1,num;
        if(dividend<0&&divisor>=0||dividend>0&&divisor<=0)sign=-1;
        if(divisor==INT_MIN) {
            if(dividend==INT_MIN)return 1;
            else return 0;
        }
        if(dividend==INT_MIN) {
            if(divisor==-1)return INT_MAX;
            else if(divisor==1)return INT_MIN;
            dividend += abs(divisor);
            res=1;
        }
        divisor=abs(divisor);
        dividend=abs(dividend);
        num=divisor;
        while(dividend>0) {
            if(num>=INT_MAX/2&&num<=dividend) {
                dividend-=num;
                num=divisor;
                res+=temp;
                temp=1;
            }
            if(num>dividend) {
                num>>=1;temp>>=1;
                dividend-=num;
                num=divisor;
                res+=temp;
                temp=1;
            }
            if(dividend<divisor)break;
            num<<=1;
            temp<<=1;
        } 
        if(sign==-1)return -res;
        return res;
    }
};
