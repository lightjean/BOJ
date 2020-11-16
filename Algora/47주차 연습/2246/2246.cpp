#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, d, c, tmp = 10001, ans = 0;
vector<pair<int, int>> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> d >> c;
        v.push_back({d, c});
    }

    sort(v.begin(), v.end());  // 거리 순으로 정렬을 해줌

    for (int i = 0; i < n; i++) {  // 거리 순으로 정렬을 했기에 거리가 멀어지면 숙박비가 싸지는 것만 세기
        if (tmp > v[i].second) {
            tmp = v[i].second;
            ans += 1;
        }
    }

    cout << ans << '\n';
    return 0;
}