// dp[n]은 n을 1로 만드는 데 필요한 최소 연산 횟수
// 점화식을 세우면 
// dp[n] = dp[n - 1] + 1 or dp[n] = dp[n / 2] + 1 or dp[n] = dp[n / 3] + 1 중 최솟값
#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000001] = {0};

int main() {
    int n;
    cin >> n;

    for(int i = 2; i <= n; i++) { // n이 1보다 크므로 dp[0]은 무시하고 2부터 시작
        dp[i] = dp[i - 1] + 1;
        if(i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
        if(i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    }

    cout << dp[n] << '\n';
    return 0;
}