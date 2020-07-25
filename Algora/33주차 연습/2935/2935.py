import sys

a = int(sys.stdin.readline())
operator = sys.stdin.readline().rstrip()
b = int(sys.stdin.readline())

if operator == '+':
    print(a + b)
else:
    print(a * b)