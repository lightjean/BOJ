#include <iostream>
#include <algorithm>
using namespace std;

int n, m, num[8], ans[8];

void run(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        if (index >= 1 && ans[index - 1] > num[i]) continue;
        ans[index] = num[i];
        run(index + 1, n, m);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);
    run(0, n, m);
    return 0;
}