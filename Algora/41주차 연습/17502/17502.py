import sys
n = int(sys.stdin.readline())
line = list(sys.stdin.readline().rstrip())

for i in range(int(n / 2)):
    if line[i] == '?' and line[n - 1 - i] != '?':
        line[i] = line[n - 1 - i]
    elif line[i] != '?' and line[n - 1 - i] == '?':
        line[n - 1 - i] = line[i]
    elif line[i] == '?' and line[n - 1 - i] == '?':
        line[i] = 'a'
        line[n - 1 - i] = 'a'
        
if n % 2 == 1:
    if line[int(n / 2)] == '?':
        line[int(n / 2)] = 'a'
        
for word in line:
    print(word, end='')