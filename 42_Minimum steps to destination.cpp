class Solution{
public:
    int minSteps(int D){
      int t = abs(D), sum = 0, step= 0;
       
       while(sum< t || (sum-t)%2 != 0)
       {
           step++;
           sum += step;
       }
       return step;
   }
};
