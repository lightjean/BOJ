import sys

n = int(sys.stdin.readline().rstrip())

arr = []
tip = 0

for i in range(n):
    arr.append(int(sys.stdin.readline().rstrip()))

arr.sort(reverse=True)

for i in range(n):
    if arr[i] - i < 0:
        break
    else:
        tip += arr[i] - i

print(tip)