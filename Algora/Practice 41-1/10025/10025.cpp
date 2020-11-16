#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, arr[1000001] = {0};
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int g, x = 0;
        cin >> g >> x;
        arr[x] = g;
    }

    int sum = 0;
    for (int i = 0; i < k * 2 + 1; i++) {
        if (i > 1000000) break;
        sum += arr[i];
    }
    
    int max_ice = sum;
    for (int i = k * 2 + 1; i <= 1000000; i++) {
        sum += arr[i];
        sum -= arr[i - (k * 2 + 1)];
        if (sum > max_ice) {
            max_ice = sum;
        }
    }
    cout << max_ice << '\n';
    return 0;
}