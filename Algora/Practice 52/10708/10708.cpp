#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> target(m), score(n, 0);
    for (int i = 0; i < m; i++)
        cin >> target[i];

    for (int i = 0; i < m; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            if (num == target[i]) {
                score[j]++;
            } else {
                cnt++;
            }
        }
        score[target[i] - 1] += cnt;
    }

    for (int i = 0; i < n; i++)
        cout << score[i] << '\n';
    return 0;
}