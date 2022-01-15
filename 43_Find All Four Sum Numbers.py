class Solution:
    def fourSum(self, arr, su):
        quads = []
        bk = dict()
        n = len(arr)
        for i in range(n):
            if arr[i] in bk:
                bk[arr[i]].append(i)
            else:
                bk[arr[i]] = [i]
        for i in range(0,n-3):
            for j in range(i+1,n-2):
                for k in range(j+1,n-1):
                    s = arr[i]+arr[j]+arr[k]
                    if su-s in bk:
                        for ind in bk[su-s]:
                            if ind not in [i,j,k]:
                                if sorted([arr[i],arr[j],arr[k],su-s]) not in quads:
                                    quads.append(sorted([arr[i],arr[j],arr[k],su-s]))
        return quads
                                
        
