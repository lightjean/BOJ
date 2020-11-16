import sys

while 1:
    n = int(sys.stdin.readline())

    if n == 0:
        break

    word = []
    
    for i in range(n):
        a = sys.stdin.readline().rstrip()
        a.lower()
        word.append(a)

    word.sort(key = str.lower)
    print(word[0])
