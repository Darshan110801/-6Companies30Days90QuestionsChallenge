class Solution:
    def findTwoElement( self,arr, n): 
        sum_num = 0
        sum_sq = 0
        for i in arr:
            sum_num += i
            sum_sq += (i*i)
        a_b = sum_num - (n*(n+1)/2)
        a2_b2 = sum_sq - (n*(n+1)*(2*n+1)/6)
        aplusb = a2_b2 / a_b
        a = (aplusb+a_b)/2
        b = aplusb-a
        return [int(a),int(b)]
