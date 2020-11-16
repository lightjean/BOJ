n = int(input())
x = 0
y = 0
i = 0
mode = 1
temp_x = 1
temp_y = 1

if n == 0:
    print(x, y, end = ' ')
else:
    while i != n:
        if mode == 1:
            for j in range(temp_y):
                if i == n:
                    break
                y += 1
                i += 1
            temp_y += 1
            mode = 2
        elif mode == 2:
            for j in range(temp_x):
                if i == n:
                    break
                x += 1
                i += 1
            temp_x += 1
            mode = 3
        elif mode == 3:
            for j in range(temp_y):
                if i == n:
                    break
                y -= 1
                i += 1
            temp_y += 1
            mode = 4
        else:
            for j in range(temp_x):
                if i == n:
                    break
                x -= 1
                i += 1
            temp_x += 1
            mode = 1

    print(x, y, end = ' ')