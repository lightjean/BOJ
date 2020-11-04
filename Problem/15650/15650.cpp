#include <iostream>
using namespace std;

int n, m, ans[8];

void run(int index, int start, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = start; i <= n; i++) {
        ans[index] = i;
        run(index + 1, i + 1, n, m);
    }
}

int main() {
    cin >> n >> m;
    run(0, 1, n, m);
    return 0;
}