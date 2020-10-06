#include <iostream>
using namespace std;

int dp[1001];

int main() {
    int n, arr[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[0] = 0;
    dp[1] = arr[1];
    // 현재 값보다 작은 값들 중 합이 최대인 것을 골라 자기 자신을 더한 값을 dp에 저장
    // 가장 긴 증가하는 부분 수열과 다른 점은 길이를 저장하는 것이 아닌 수의 합을 저장함
    for (int i = 2; i <= n; i++) {
        int max = 0, max_idx = 0;
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                if (dp[j] > max) {
                    max = dp[j];
                    max_idx = j;
                }
            }
        }
        dp[i] = dp[max_idx] + arr[i];
    }
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (dp[i] > ans) {
            ans = dp[i];
        }
    }
    cout << ans << '\n';
    return 0;
}