class Solution:
    def find3number(self,a, n):
        stck = []
        for i in range(n-1,-1,-1):
            if len(stck) != 0 and stck[-1] <= a[i]:
                while len(stck) != 0 and stck[-1] <= a[i]:
                    del stck[-1]
            stck.append(a[i])
            
            if len(stck)==3:
                return stck[::-1]
        return []
                    
