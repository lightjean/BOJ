C, K = map(int, input().split())

K = 10 ** K

if C % K >= K / 2:
    C += K - (C % K)
else:
    C -= C % K

print(C)