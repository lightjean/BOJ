import sys

underprime = 0

a, b = map(int, sys.stdin.readline().split())

check = [False, False] + [True] * (b - 1) # 소수 판정
primes = [] # 소수 저장

for i in range(2, b + 1): # 에라토스테네스 체
    if check[i]:
        primes.append(i)
        for j in range(i * 2, b + 1, i):
            check[j] = False

for i in range(a, b + 1): # 언더프라임 구하기
    cnt = 0

    for j in primes:
        if i % j == 0:
            while i % j == 0:
                i /= j
                cnt += 1
        if i == 1:
            break
    if cnt in primes:
        underprime += 1

print(underprime)