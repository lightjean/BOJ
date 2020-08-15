n = int(input())
operation = []
cnt = 0

for i in range(n): # 연산 리스트
    operation.append(input().split())

for i in range(1, 101): # 각 정수에 대해서
    temp = i
    check = False # messed up 검사

    for j in operation: # 입력받은 연산을 모두 수행
        num = int(j[1])

        if j[0] == "ADD":
            temp += num
        elif j[0] == "SUBTRACT":
            temp -= num
        elif j[0] == "MULTIPLY":
            temp *= num
        else:
            temp /= num

        if temp < 0 or int(temp) != temp: # messed up
            check = True

    if check == True:
        cnt += 1

print(cnt)