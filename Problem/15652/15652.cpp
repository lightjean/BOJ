#include <iostream>
using namespace std;

int n, m, ans[8];

void run(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (index >= 1 && ans[index - 1] > i) continue;
        ans[index] = i;
        run(index + 1, n, m);
    }
}

int main() {
    cin >> n >> m;
    run(0, n, m);
    return 0;
}