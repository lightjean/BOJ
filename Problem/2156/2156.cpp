#include <iostream>
using namespace std;

int dp[10001] = {0};

int get_max(int a, int b) {
    if (a >= b) return a;
    else return b;
}

int main() {
    int n, arr[10001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    if (n == 1) {
        cout << dp[1] << '\n';
        return 0;
    } else if (n == 2) {
        cout << dp[2] << '\n';
        return 0;
    }

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 3] + arr[i - 1] + arr[i];
        dp[i] = get_max(dp[i - 2] + arr[i], dp[i]);
        dp[i] = get_max(dp[i - 1], dp[i]);
    }

    cout << dp[n] << '\n';
    return 0;
}