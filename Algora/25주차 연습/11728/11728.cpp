#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, idx_a = 0, idx_b = 0, a[1000000], b[1000000];
    bool finish_a = false, finish_b = false;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n + m; i++) {
        if(finish_a == true && finish_b == false) {
            cout << b[idx_b] << " ";
            idx_b++;
        } else if(finish_a == false && finish_b == true) {
            cout << a[idx_a] << " ";
            idx_a++;
        } else if(a[idx_a] < b[idx_b]) {
            cout << a[idx_a] << " ";

            if(idx_a == n - 1) {
                finish_a = true;
            } else {
                idx_a++;
            }
        } else {
            cout << b[idx_b] << " ";

            if(idx_b == m - 1) {
                finish_b = true;
            } else {
                idx_b++;
            }
        }
    }

    return 0;
} // 정렬 쓰지 않고 출력 순서만 생각해서 품