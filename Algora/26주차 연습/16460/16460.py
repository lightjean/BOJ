import sys

arr = []
found = False
user = sys.stdin.readline().rstrip()
arr.append(user.split())

n = int(sys.stdin.readline())

for i in range(n):
    user = sys.stdin.readline().rstrip()
    arr.append(user.split())

    if arr[i + 1][1].find(arr[0][1]) != -1 or arr[0][1].find(arr[i + 1][1]) != -1:
        if int(arr[i + 1][2]) <= int(arr[0][2]):
            found = True
            print(arr[i + 1][0])

if found == False:
    print("No one yet")