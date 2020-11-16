b_row, b_col = map(int, input().split())
d_row, d_col = map(int, input().split())
j_row, j_col = map(int, input().split())

b_step = 0
d_step = 0

temp_row = abs(j_row - b_row)
temp_col = abs(j_col - b_col)

while 1:
    if temp_row == 0 or temp_col == 0:
        break
    temp_row -= 1
    temp_col -= 1
    b_step += 1

b_step += temp_row + temp_col
d_step = abs(j_row - d_row) + abs(j_col - d_col)

if b_step > d_step:
    print("daisy")
elif b_step < d_step:
    print("bessie")
else:
    print("tie")