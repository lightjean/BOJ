#include <iostream>
#include <algorithm>
using namespace std;

// 중복될 수 있기 때문에 cnt를 할 필요 없음
int n, m, tmp[7], num[7], ans[7];

void run(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return ;
    }
    for (int i = 0; i < n; i++) {
        ans[index] = num[i];
        run(index + 1, n, m);
    }
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
        cin >> tmp[i];

    sort(tmp, tmp + n);

    int k = 0, x = tmp[0];

    for (int i = 1; i < n; i++) {
        if (x == tmp[i]) continue;
        num[k] = x;
        k += 1;
        x = tmp[i];
    }
    num[k] = x;
    
    run(0, k + 1, m);
    return 0;
}