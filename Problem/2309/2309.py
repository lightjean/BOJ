import sys

height = []
sum = 0

for i in range(9):
    temp1 = int(sys.stdin.readline())
    sum += temp1
    height.append(temp1)

height.sort()

for i in range(8):
    for j in range(i + 1, 9):
        temp2 = height[i] + height[j]

        if sum - temp2 == 100:
            one = height[i]
            two = height[j]

height.remove(one)
height.remove(two)

for h in height:
    print(h)