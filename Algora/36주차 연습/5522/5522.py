import sys

sum = 0

for i in range(5):
    num = int(sys.stdin.readline().rstrip())
    sum += num

print(sum)