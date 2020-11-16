n = input()
a = list(map(int, input().split()))

a.sort()
a.pop()

print(sum(a))