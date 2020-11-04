#include <iostream>
#include <algorithm>
using namespace std;

int n, m, num[8], ans[8];

void run(int index, int selected, int n, int m) {
    if (selected == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    if (index == n) return;
    ans[selected] = num[index];
    run(index + 1, selected + 1, n, m);
    run(index + 1, selected, n, m);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);
    run(0, 0, n, m);
    return 0;
}