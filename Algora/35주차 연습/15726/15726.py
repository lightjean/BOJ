import math

A, B, C = map(int, input().split())

ans1 = math.trunc(A * B / C)
ans2 = math.trunc(A / B * C)

if ans1 > ans2:
    print(ans1)
else:
    print(ans2)