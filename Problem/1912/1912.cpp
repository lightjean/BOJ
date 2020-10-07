#include <iostream>
using namespace std;

int dp [100001]; // 앞에서부터의 부분합을 저장
// 직전까지의 부분합과 현재 수를 더하고 이를 현재 수와 비교
// 현재 수가 더 크면 이전 계산한 부분합을 버리고 현재 수부터 시작
int main() {
    int n, arr[100001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[0] = 0;
    dp[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        if (dp[i - 1] + arr[i] < arr[i]) {
            dp[i] = arr[i];
        } else dp[i] = dp[i - 1] + arr[i];
    }
    int ans = -1000;
    for (int i = 1; i <= n; i++) {
        if (dp[i] > ans) ans = dp[i];
    }
    cout << ans << '\n';
    return 0;
}