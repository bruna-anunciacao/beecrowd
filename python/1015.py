import math

xP1, yP1 = map(float, input().split())
xP2, yP2 = map(float, input().split())

def distance(x1, y1, x2, y2): 
    return math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

print(f'{distance(xP1, yP1, xP2, yP2):.4f}')