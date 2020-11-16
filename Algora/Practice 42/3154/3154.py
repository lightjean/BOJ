import sys

def effort(a, b):
    return abs(x[a] - x[b]) + abs(y[a] - y[b])

h, m = map(int, sys.stdin.readline().rstrip().split(':'))

x = {1:0, 2:1, 3:2, 4:0, 5:1, 6:2, 7:0, 8:1, 9:2, 0:1}
y = {1:0, 2:0, 3:0, 4:1, 5:1, 6:1, 7:2, 8:2, 9:2, 0:3}

min_effort = 10 #임의값으로 지정해 줌
a = h
b = m

while True:
    if a >= 100:
        break
    while True:
        if b >= 100:
            b = m
            break
        h1 = a // 10
        h2 = a % 10
        m1 = b // 10
        m2 = b % 10
        tmp = effort(h1, h2) + effort(h2, m1) + effort(m1, m2)
        if min_effort > tmp:
            ans1 = a
            ans2 = b
            min_effort = tmp
        b += 60
    a += 24
    
if ans1 < 10:
    ans1 = '0' + str(ans1)
if ans2 < 10:
    ans2 = '0' + str(ans2)
print("{}:{}".format(ans1, ans2))