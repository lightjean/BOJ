date = int(input())
car = list(map(int, input().split()))
cnt = 0

for i in car:
    if date == i:
        cnt += 1

print(cnt)