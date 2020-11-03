#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans;
    bool arr[10000001] = {0};
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        if (arr[tmp] == 1) {
            ans = tmp;
        }
        arr[tmp] += 1;
    }

    cout << ans << '\n';
    return 0;
}