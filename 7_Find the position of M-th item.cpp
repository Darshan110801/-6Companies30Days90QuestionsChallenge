class Solution {
  public:
    int findPosition(int N , int M , int K) {
         K--;
         M--;
         return ((K+M)%N)+1;
    }
};
