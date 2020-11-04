#include <iostream>
#include <algorithm>
using namespace std;

int n, m, num[8], ans[8];
bool check[8] = {0};

void run(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        if (check[i]) continue;
        ans[index] = num[i];
        check[i] = 1;
        run(index + 1, n, m);
        check[i] = 0;
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