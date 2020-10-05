import sys

def get_day(m):
    return {1:31, 2:28, 3:31, 4:30, 5:31, 6:30, 7:31, 8:31, 9:30, 10:31, 11:30, 12:31}[m]

def day_name(d):
    return {1:'MON', 2:'TUE', 3:'WED', 4:'THU', 5:'FRI', 6:'SAT', 0:'SUN'}[d]

x, y = map(int, sys.stdin.readline().split())
day = 0
for i in range(x - 1):
    day += get_day(i + 1)
day += y
day = day % 7
print(day_name(day))