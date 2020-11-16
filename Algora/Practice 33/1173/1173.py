N, m, M, T, R = map(int, input().split())
total = 0 # 전체 걸린 시간
time = 0 # 운동한 시간
X = m # 현재 맥박
first = True # 운동을 처음하는지 확인
check = False # 운동이 가능한지 불가능한지 확인

# 운동을 끝낼 수 없는 경우: 맥박 때문에 운동 자체를 할 수 없는 경우
while time != N:
    if first == True:
        if X + T > M: # 운동을 끝낼 수 없을 때
            check = True
            break

    first = False

    if X + T <= M: # 운동 가능할 때
        X += T
        time += 1
    else: # 쉬어야할 때
        if X - R < m:
            X = m
        else:
            X -= R

    total += 1
            
if check == True:
    print(-1)
else:
    print(total)