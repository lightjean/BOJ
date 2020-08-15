import sys

n = int(input())

if n == 1 or n == 3: # 거스를 수 없는 경우
    print(-1)
    sys.exit()
elif (n % 5) % 2 == 1: # n을 5로 나눈 나머지가 홀수
    five = int(n / 5) - 1 # 5를 1개 덜 나누고
    n -= 5 * five # 나머지를
    two = int(n / 2) # 2로 나눔
else: # n을 5로 나눈 나머지가 짝수
    five = int(n / 5) # 5로 나누고
    n -= 5 * five # 나머지르
    two = int(n / 2) # 2로 나눔

print(five + two)