class Solution:
    def set_(self,li,i,val):
        if val == 0:
            return True
        if li[i] == 0:
            li[i] = set()
            li[i].add(val)
            return True
        else:
            if val in li[i]:
                return False
            else:
                li[i].add(val)
                return True
                
    def isValid(self, mat):
        row = [0]*9
        col = [0]*9
        block = [0]*9
        h = set()
        for i in range(9):
            for j in range(9):
                if mat[i][j] == 0:
                    continue
                if (str(i)+'row',mat[i][j]) in h:
                    return 0
                else:
                    h.add((str(i)+'row',mat[i][j]))
                if (mat[i][j],j) in h:
                    return 0
                else:
                    h.add((mat[i][j],j))
                if (i//3,mat[i][j],j//3) in h:
                    return 0
                else:
                    h.add((i//3,mat[i][j],j//3))
        return 1
    
