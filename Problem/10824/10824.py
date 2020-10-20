import sys

a, b, c, d = map(str, sys.stdin.readline().rstrip().split())
num1 = a + b
num2 = c + d
print(int(num1) + int(num2))