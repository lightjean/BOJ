#include <iostream>
using namespace std;

int n, m, ans[8];
bool check[10] = {0};

void run(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (check[i]) continue;
        if (index >= 1 && ans[index - 1] > i) continue;
        ans[index] = i;
        check[i] = 1;
        run(index + 1, n, m);
        check[i] = 0;
    }
}

int main() {
    cin >> n >> m;
    run(0, n, m);
    return 0;
}