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
        int j, n, ans = 0;
        cin >> j >> n;

        vector<int> box(n);

        for (int i = 0; i < n; i++) {
            int r, c;
            cin >> r >> c;
            box[i] = r * c;
        }

        sort(box.begin(), box.end(), greater<int>());

        for (int i = 0; i < n; i++) {
            j -= box[i];
            ans += 1;
            if (j <= 0) break;
        }

        cout << ans << '\n';
    }

    return 0;
}