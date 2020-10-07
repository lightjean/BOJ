#include <iostream>
using namespace std;

int dp[2][1002]; // 1행에는 증가 부분 수열 길이, 2행에는 감소 부분 수열 길이

int main() {
    int n, arr[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[0][0] = 0;
    dp[1][n + 1] = 0;
    dp[0][1] = 1;
    dp[1][n] = 1;
    for (int i = 2; i <= n; i++) { // 증가 부분 수열
        int max = 0;
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                if (dp[0][j] > max) {
                    max = dp[0][j];
                }
            }
        }
        dp[0][i] = max + 1;
    }
    for (int i = n - 1; i >= 1; i--) { // 감소 부분 수열
        int max = 0;
        for (int j = n; j > i; j--) {
            if (arr[i] > arr[j]) {
                if (dp[1][j] > max) {
                    max = dp[1][j];
                }
            }
        }
        dp[1][i] = max + 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) { // 합하면 바이토닉 부분 수열
        if (dp[0][i] + dp[1][i] > ans) {
            ans = dp[0][i] + dp[1][i];
        }
    }
    cout << ans - 1 << '\n';
    return 0;
}