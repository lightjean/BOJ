N = int(input())

for i in range(N):
    a, b = map(str, input().split('-'))

    ans1 = (ord(a[0]) - 65) * (26 ** 2) + (ord(a[1]) - 65) * (26 ** 1) + (ord(a[2]) - 65) * (26 ** 0)
    ans2 = int(b)

    if abs(ans1 - ans2) <= 100:
        print("nice")
    else:
        print("not nice")