import heapq
class Solution:
    def maxProbability(self, n: int, edges: List[List[int]], succProb: List[float], start: int, end: int) -> float:
        # build graph
        adj = collections.defaultdict(list)
        prob = {}
        for i in range(len(edges)):
            u, v = edges[i]
            adj[u].append(v)
            adj[v].append(u)
            prob[(u, v)] = succProb[i]
            prob[(v, u)] = succProb[i]
        
        # Dijkstra
        res = 0
        dic = collections.defaultdict(float)
        queue = [(-1, start)]
        while queue:
            p, u = heapq.heappop(queue)
            p = -p
            if u == end:
                res = max(res, p)
            for v in adj[u]:
                # relax
                currProb = p * prob[(u, v)]
                if currProb > dic[v]:
                    dic[v] = currProb
                    heapq.heappush(queue, (-currProb, v))
        return res
