N, T, C, P = map(int, input().split())
amount = 0
day = 1 + T

while day <= N:
    amount += C
    day += T

print(amount * P)