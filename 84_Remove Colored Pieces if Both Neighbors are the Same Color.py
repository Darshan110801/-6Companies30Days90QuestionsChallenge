class Solution:
    def winnerOfGame(self, colors: str) -> bool:
        l = len(colors)
        a = len([colors[i:i+3] for i in range(0,l-2) if colors[i:i+3] == "AAA"])
        b = len([colors[i:i+3] for i in range(0,l-2) if colors[i:i+3] == "BBB"])
        return a>b
        
