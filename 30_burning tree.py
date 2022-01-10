class Solution:
    ans = 0
    def __init__(self):
        self.ans = 0
    def helper(self,root,target):
        if root == None:
            return 0
        else:
            l = self.helper(root.left,target)
            r = self.helper(root.right,target)
        if root.data == target:
            self.ans  =max([l,r])
            return -1
        elif l < 0:
            l = int(abs(l))
            self.ans = max([self.ans,l+r])
            return -1-l
        elif r < 0:
            r = int(abs(r))
            self.ans = max([self.ans,l+r])
            return -1-r
        else:
            return max([l,r])+1
        
    def minTime(self, root,target):
        self.helper(root,target)
        return self.ans
        # code here
