#include <iostream>
using namespace std;

int max(int a, int b) {
    if (a >= b) return a;
    else return b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, sticker[2][100001], dp[2][100001]; 
        cin >> n;
        for (int i = 0; i < 2; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> sticker[i][j];
            }
        }
        dp[0][0] = 0;
        dp[1][0] = 0;
        dp[0][1] = sticker[0][1];
        dp[1][1] = sticker[1][1]; // 21~24 초기값 설정
        for (int i = 2; i <= n; i++) { // 현재 위치의 전 대각선 값과 전전 대각선 값을 비교
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + sticker[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + sticker[1][i];
        }

        cout << max(dp[0][n], dp[1][n]) << '\n';
    }
    return 0;
}