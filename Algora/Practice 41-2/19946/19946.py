import sys
n = int(sys.stdin.readline())
temp1 = 1
temp2 = 0
check = False
for i in range(1, 65):
    temp1 *= 2
    temp2 = temp1
    temp2 -= 1
    for j in range(i, 65):
        if n == temp2:
            print(i)
            check = True
            break
        temp2 *= 2