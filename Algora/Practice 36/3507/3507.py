import sys

n = int(input())

if n > 198:
    print(0)
    sys.exit()
else:
    a = 99
    b = n - a
    cnt = 1

    while b != 99:
        a -= 1
        b += 1
        cnt += 1

print(cnt)