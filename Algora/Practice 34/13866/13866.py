A, B, C, D = map(int, input().split())

ans1_1 = A + C
ans1_2 = B + D
ans2_1 = A + D
ans2_2 = B + C

ans1 = abs(ans1_1 - ans1_2)
ans2 = abs(ans2_1 - ans2_2)

if ans1 > ans2:
    print(ans2)
else:
    print(ans1)