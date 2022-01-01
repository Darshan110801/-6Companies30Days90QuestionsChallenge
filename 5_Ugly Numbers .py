class Solution:
	def getNthUglyNo(self,n):
		li = [0]*(n+1)
		li[1] = 1
		ptr2 =1
		ptr3 =1
		ptr5 = 1
		for i in range(2,n+1):
		    cand1 = li[ptr2] * 2
		    cand2 = li[ptr3] * 3
		    cand3 = li[ptr5] * 5
		    
		    winner = min([cand1,cand2,cand3])
		    if winner == cand1:
		        ptr2 += 1
		    if winner == cand2:
		        ptr3 += 1
		    if winner == cand3:
		        ptr5 += 1
		    li[i] =  winner
		    
		return li[n]
		    
