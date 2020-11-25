#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, n, score = 0, max_score = 0;
    string my_rsp;
    vector<string> friend_rsp;

    cin >> r >> my_rsp >> n;

    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        friend_rsp.push_back(tmp);
    }

    for (int i = 0; i < r; i++) {
        int cnt[3] = {0}, tmp_max[3] = {0};

        for (int j = 0; j < n; j++) {
            if (my_rsp[i] == 'R' && friend_rsp[j][i] == 'S') {
                score += 2;
            } else if (my_rsp[i] == 'S' && friend_rsp[j][i] == 'P') {
                score += 2;
            } else if (my_rsp[i] == 'P' && friend_rsp[j][i] == 'R') {
                score += 2;
            } else if (my_rsp[i] == friend_rsp[j][i]) {
                score += 1;
            }
        }

        for (int j = 0; j < n; j++) {
            if (friend_rsp[j][i] == 'R') {
                cnt[0]++;
            } else if (friend_rsp[j][i] == 'S') {
                cnt[1]++;
            } else {
                cnt[2]++;
            }
        }

        tmp_max[0] = cnt[1] * 2 + cnt[0];
        tmp_max[1] = cnt[2] * 2 + cnt[1];
        tmp_max[2] = cnt[0] * 2 + cnt[2];
        max_score += max({tmp_max[0], tmp_max[1], tmp_max[2]});
    }

    cout << score << '\n';
    cout << max_score << '\n';
    return 0;
}