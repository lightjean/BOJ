#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, x1, x2, y1, y2, arr[301][301], dp[301][301] = {0};

    cin >> n >> m;

    for(int i = 1; i <= n; i++) { // arr에는 입력 데이터를, dp에는 맨 처음부터 현재까지의 누적 합을 저장
        for(int j = 1; j <= m; j++) {
            cin >> arr[i][j];
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + arr[i][j] - dp[i - 1][j - 1]; // 누적 합
        }
    }

    cin >> k;

    for(int i = 0; i < k; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << dp[x2][y2] - (dp[x1 - 1][y2] +(dp[x2][y1 - 1] - dp[x1 - 1][y1 - 1])) << '\n';
    }

    return 0;
}