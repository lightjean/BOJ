#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, ans, work_end;
vector<pair<int, int>> v;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), cmp);
    ans = v[0].second - v[0].first;  // 가장 늦게 일어나도 되는 시간
    if (ans < 0) {
        cout << -1 << '\n';
        return 0;
    }
    work_end = v[0].second;

    bool flag = 1;
    for (int i = 1; i < n; i++) {
        if (work_end + v[i].first <= v[i].second) {
            work_end += v[i].first;
        } else {
            flag = 0;
            break;
        }
    }

    if (flag) {
        cout << ans << '\n';
    } else {
        cout << -1 << '\n';
    }
    return 0;
}