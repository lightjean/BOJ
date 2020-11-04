#include <iostream>
#include <algorithm>
using namespace std;

int n, m, tmp[8], num[8], ans[8];

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
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> tmp[i];

    sort(tmp, tmp + n);

    int k = 0, x = tmp[0];

    for (int i = 1; i < n; i++) {
        if (x == tmp[i]) continue;
        num[k] = x;
        x = tmp[i];
        k += 1;
    }
    num[k] = x;

    run(0, k + 1, m);
    return 0;
}