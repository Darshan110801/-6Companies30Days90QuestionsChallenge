
class Solution:
    def forms_cycle(self,i,in_stack,visited,adj):
        visited[i] = True
        in_stack[i] = True
        for ngb in adj[i]:
            if not visited[ngb]:
                if self.forms_cycle(ngb,in_stack,visited,adj):
                    return True
            else:
                if in_stack[ngb]:
                    return True
        in_stack[i] = False
        return False
    def isPossible(self,N,prerequisites):
        adj = []
        for i in range(N):
            adj.append([])
        for edge in prerequisites:
            adj[edge[1]].append(edge[0])
        in_stack = [False]*N
        visited = [False]*N
        for i in range(N):
            if not visited[i]:
                if self.forms_cycle(i,in_stack,visited,adj):
                    return False
        return True
