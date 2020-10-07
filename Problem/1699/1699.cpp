#include <iostream>
using namespace std;

int dp[100001]; // 해당 인덱스의 최소항 수

int get_min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) dp[i] = i;
    for (int i = 2; i <= n; i++) 
        for (int j = 2; j * j <= i; j++) // 현재 수에서 표현 가능한 제곱 수들(1은 dp[1] 말고는 최소항이 될 수 없음)
            dp[i] = get_min(dp[i], dp[i - j * j] + 1); // 표현 가능한 제곱 수들 중 항의 수가 작은 것을 택함
    cout << dp[n] << '\n';
    return 0;
}