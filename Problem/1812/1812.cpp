#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = 0, num, a;
    cin >> n;
    num = n / 2;

    vector<int> v(n), ans(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sum /= 2;  // 전체 학생의 사탕 합

    int tmp = 0;
    for (int i = 0; i < num; i++) // a를 제외한 모든 합
        tmp += v[2 * i + 1];

    a = sum - tmp;
    ans[0] = a;
    for (int i = 1; i < n; i++) {
        ans[i] = v[i - 1] - a;
        a = ans[i];
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << '\n';
    return 0;
}