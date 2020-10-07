#include <iostream>
using namespace std;

int dp[301];

int get_max(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main() {
    int n, arr[301];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[1] = arr[1]; // 첫 번째 계단
    dp[2] = get_max(arr[1] + arr[2], arr[2]); // 첫 번째 계단 밟고 두 번째 계단 or 바로 두 번째 계단
    dp[3] = get_max(arr[1] + arr[3], arr[2] + arr[3]); // 첫 번쨰 계단 밟고 세 번째 계단 or 두 번째 계단 밝고 세 번째 계단
    for (int i = 4; i <= n; i++) {
        dp[i] = get_max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
    }
    cout << dp[n] << '\n';
    return 0;
}