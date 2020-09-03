#include <iostream>
#include <cstring>
using namespace std;

int dp[12];

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        if(n < 4) {
            cout << dp[n] << '\n';
            continue;
        } else {
            for(int i = 4; i <= n; i++) {
                dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
            }
        }

        cout << dp[n] << '\n';
    }
    return 0;
}