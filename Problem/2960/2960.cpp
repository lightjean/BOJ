#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, cnt = 0;
    bool check[1001] = {0};
    cin >> n >> k;

    for (int i = 2; i <= n; i++) {
        if (check[i] == 0) {
            for (int j = i; j <= n; j += i) {
                if (check[j] == 0) {
                    check[j] = 1;
                    cnt++;
                }
                
                if (cnt == k) {
                    cout << j << '\n';
                    return 0;
                }
            }
        }
    }
    return 0;
}