import sys

arr = []
ans = []
not_found = False
user = sys.stdin.readline().rstrip()
arr.append(user.split())

n = int(sys.stdin.readline())

for i in range(n):
    found = False
    user = sys.stdin.readline().rstrip()
    arr.append(user.split())

    if int(arr[i + 1][2]) <= int(arr[0][2]): # 거리 비교
        if arr[i + 1][1].find(arr[0][1]) != -1: # 성별 선호도 비교
            found = True
        elif arr[0][1].find(arr[i + 1][1]) != -1:
            found = True
        elif (arr[i + 1][1] == 'FM' or arr[i + 1][1] == 'MF') or (arr[0][1] == 'FM' or arr[0][1] == 'MF'):
            found = True
    
    if found == True:
        ans.append(arr[i + 1][0])
        not_found = True

ans.sort() # 사전순으로 나열

for i in ans:
    print(i)

if not_found == False: # 일치하는 유저가 없는 경우
    print("No one yet")