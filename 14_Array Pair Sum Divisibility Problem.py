class Solution:
	def canPair(self,a,k):
		remainders_count = [0]*k
		for i in a:
		    remainders_count[i%k] += 1
		if(remainders_count[0] % 2 != 0):
		    return False
		else:
		    i = 1
		    j = k-1
		    while i < j:
		        if remainders_count[i] != remainders_count[j]:
		            return False
		        i+=1
		        j-=1
		    if k % 2 == 0 and remainders_count[int(k/2)]%2 !=0:
		        return False
		    return True
		
