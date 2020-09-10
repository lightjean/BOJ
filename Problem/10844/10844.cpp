#include <iostream>
using namespace std;

int dp[101][10] = {0};

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= 9; i++) {
        dp[1][i] += 1;
    }

    for(int i = 2; i <= n; i++) { // 수가 정말 크기 때문에 계산 과정마다 나머지 연산을 해줘야 함
        for(int j = 0; j <= 9; j++) {
            if(j == 0) {
                dp[i][j] = dp[i - 1][j + 1] % 1000000000;
            } else if(j == 9) {
                dp[i][j] = dp[i - 1][j - 1] % 1000000000;
            } else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
            }
        }
    }

    int sum = 0;

    for(int i = 0; i <= 9; i++) {
        sum = (sum + dp[n][i]) % 1000000000;
    }

    cout << sum << '\n';
    return 0;
}