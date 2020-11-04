#include <iostream>
#include <algorithm>
using namespace std;

int n, m, tmp[8], num[8], cnt[8], ans[8];

void run(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        if (cnt[i] > 0) {
            if (index >= 1 && ans[index - 1] > num[i]) continue;
            cnt[i] -= 1;
            ans[index] = num[i];
            run(index + 1, n, m);
            cnt[i] += 1;
        }
    }
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
        cin >> tmp[i];

    sort(tmp, tmp + n);

    int k = 0, c = 1, x = tmp[0];

    for (int i = 1; i < n; i++) {
        if (x == tmp[i]) {
            c += 1;
        } else {
            num[k] = x;
            cnt[k] = c;
            x = tmp[i];
            k += 1;
            c = 1;
        }
    }
    num[k] = x;
    cnt[k] = c;
    
    run(0, k + 1, m);
    return 0;
}