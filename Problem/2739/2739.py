import sys
n = int(sys.stdin.readline())
for i in range(9):
    print("{} * {} = {}".format(n, i + 1, n * (i + 1)))