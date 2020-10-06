#include <iostream>
using namespace std;

int dp[2][41];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        dp[0][0] = 1;
        dp[1][0] = 0;
        dp[0][1] = 0;
        dp[1][1] = 1;
        if (n == 0) cout << dp[0][0] << " " << dp[1][0] << '\n';
        else if (n == 1) cout << dp[0][1] << " " << dp[1][1] << '\n';
        else {
            for (int i = 2; i <= n; i++) {
                dp[0][i] = dp[0][i - 2] + dp[0][i - 1];
                dp[1][i] = dp[1][i - 2] + dp[1][i - 1];
            }
            cout << dp[0][n] << " " << dp[1][n] << '\n';
        }
    }
    return 0;
}