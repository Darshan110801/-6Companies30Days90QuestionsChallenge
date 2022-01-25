"""
# Definition for a QuadTree node.
class Node:
    def __init__(self, val, isLeaf, topLeft, topRight, bottomLeft, bottomRight):
        self.val = val
        self.isLeaf = isLeaf
        self.topLeft = topLeft
        self.topRight = topRight
        self.bottomLeft = bottomLeft
        self.bottomRight = bottomRight
"""

class Solution:
    def constructor(self,grid,i,j,n):
        ones=0
        zeroes=0
        if len(set(x for row in grid[i:i+n] for x in row[j:j+n])) > 1:
            lim =n//2
            return Node(grid[i][j],False,self.constructor(grid,i,j,lim),self.constructor(grid,i,j+lim,lim),self.constructor(grid,i+lim,j,lim),self.constructor(grid,i+lim,j+lim,lim))
        else:
            return Node(grid[i][j],True,None,None,None,None)
    def construct(self, grid: List[List[int]]) -> 'Node':
        n = len(grid[0])
        return self.constructor(grid,0,0,n)
        
