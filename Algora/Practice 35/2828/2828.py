N, M = map(int, input().split())
j = int(input())
d = 0 # 이동한 거리
front = 1 # 바구니의 가장 왼쪽 위치
back = M # 바구니의 가장 오른쪽 위치

for i in range(j):
    apple = int(input())

    if apple > back: # 바구니보다 오른쪽에 떨어지는 경우
        d += apple - back
        front += apple - back
        back += apple - back
    elif apple < front: # 바구니보다 왼쪽에 떨어지는 경우
        d += front - apple
        front -= front - apple
        back -= front - apple

print(d)