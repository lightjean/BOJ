import sys

n = int(sys.stdin.readline())
mine = []
mine_map = [[0 for j in range(n)] for i in range(n)]

for i in range(n):
    mine.append(list(sys.stdin.readline().rstrip()))

for i in range(n):
    for j in range(n):
        if mine[i][j] != '.':
            mine_map[i][j] = '*'
            if i - 1 >= 0:
                if j - 1 >= 0 and mine_map[i - 1][j - 1] != '*':
                    mine_map[i - 1][j - 1] += int(mine[i][j]) # 좌측 상단
                if j + 1 < n and mine_map[i - 1][j + 1] != '*':
                    mine_map[i - 1][j + 1] += int(mine[i][j]) # 우측 상단
                if mine_map[i - 1][j] != '*':
                    mine_map[i - 1][j] += int(mine[i][j]) # 상단
            if i + 1 < n:
                if j - 1 >= 0 and mine_map[i + 1][j - 1] != '*':
                    mine_map[i + 1][j - 1] += int(mine[i][j]) # 좌측 하단
                if j + 1 < n and mine_map[i + 1][j + 1] != '*':
                    mine_map[i + 1][j + 1] += int(mine[i][j]) # 우측 하단
                if mine_map[i + 1][j] != '*':
                    mine_map[i + 1][j] += int(mine[i][j]) # 하단
            if j - 1 >= 0 and mine_map[i][j - 1] != '*':
                mine_map[i][j - 1] += int(mine[i][j]) # 좌측
            if j + 1 < n and mine_map[i][j + 1] != '*':
                mine_map[i][j + 1] += int(mine[i][j]) # 우측
                
for i in range(n):
    for j in range(n):
        if mine_map[i][j] != '*':
            if mine_map[i][j] >= 10:
                mine_map[i][j] = 'M'
        print(mine_map[i][j], end='')
    print()