import random
import math
class Solution:

    def __init__(self, radius: float, x_center: float, y_center: float):
        self.r,self.x_center,self.y_center = radius,x_center,y_center
        
        
        

    def randPoint(self) -> List[float]:
        theta = random.random()*2*math.pi
        r = self.r*math.sqrt(random.random())
        x = self.x_center + math.cos(theta)*r
        y = self.y_center + math.sin(theta)*r
        return [x,y]
