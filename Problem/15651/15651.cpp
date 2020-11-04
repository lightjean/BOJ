#include <iostream>
using namespace std;

int n, m, ans[7];

void run(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        ans[index] = i;
        run (index + 1, n, m);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    run(0, n, m);
    return 0;
}