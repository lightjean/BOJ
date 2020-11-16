#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        vector<int> student(k);

        for (int i = 0; i < k; i++)
            cin >> student[i];

        int n;
        cin >> n;
        vector<int> participant(n);
        vector<vector<int>> result(n, vector<int>(2));

        for (int i = 0; i < n; i++)
            cin >> participant[i] >> result[i][0] >> result[i][1];

        int best_record = 1440, best_number, cnt = 0;

        for (int i = 0; i < k; i++) {
            int index, elapsed;
            index = find(participant.begin(), participant.end(), student[i]) - participant.begin();
            elapsed = result[index][0] * 60 + result[index][1];
            if (result[index][0] == -1) continue;
            if (elapsed < best_record) {
                best_record = elapsed;
                best_number = participant[index];
            }
            if (elapsed <= 360) cnt += 1;
        }
        cout << best_number << " " << cnt << '\n';
    }
    return 0;
}