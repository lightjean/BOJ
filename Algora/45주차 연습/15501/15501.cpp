#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    bool flag = 0;
    cin >> n;
    vector<int> v1(n), v2(n);

    for (int i = 0; i < n; i++)
        cin >> v1[i];

    for (int i = 0; i < n; i++)
        cin >> v2[i];

    int idx = find(v1.begin(), v1.end(), v2[0]) - v1.begin(); // iterator끼리 빼면 거리가 나옴
    bool direction = 0;

    if (n == 1) { // 100%에서 틀린 이유
        cout << "good puzzle" << '\n';
        return 0;
    }

    if (v1[(idx + 1) % n] == v2[1]) {// 왼쪽으로 진행되는지 오른쪽으로 진행되는지 확인
        direction = 0; // 오른쪽
    } else if (v1[(idx - 1 + n) % n] == v2[1]) {
        direction = 1; // 왼족
    } else {
        flag = 1;
    }

    int cnt = 0;
    while (cnt != n) {
        if (flag) break;
        if (v1[idx] != v2[cnt]) {
            flag = 1;
            break;
        }

        if (direction) {
            idx = (idx - 1 + n) % n;
        } else {
            idx = (idx + 1) % n;
        }
        cnt++;
    }

    if (flag) {
        cout << "bad puzzle" << '\n';
    } else {
        cout << "good puzzle" << '\n';
    }

    return 0;
}