#include <iostream>
using namespace std;

int dp[1001][10] = {0};

int main() {
    int n;
    cin >> n;

    for(int i = 0; i <= 9; i++) {
        dp[1][i] += 1;
    }

    for(int i = 2; i <= n; i++) {
        int sum = 0;
        for(int j = 0; j <= 9; j++) {
            sum += dp[i - 1][j] % 10007; // i-1번째 dp에 있는 배열의 합이 i번째 0으로 시작하는 오르막 수의 개수
        }
        dp[i][0] = sum;
        for(int j = 1; j <= 9; j++) {
            sum -= dp[i - 1][j - 1] % 10007;
            dp[i][j] = sum % 10007;
        }
    }

    int ans = 0;
    for(int i = 0; i <= 9; i++) {
        ans += dp[n][i];
    }

    cout << ans % 10007 << '\n';
    return 0;
}