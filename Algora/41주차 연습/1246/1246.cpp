#include <iostream>
#include <algorithm>
using namespace std;

int total = 0, price = 1000000, arr[1000] = {0}, profit[1000] = {0};

void cal_profit(int a) {
    for (int i = 0; i < a; i++) {
        profit[i] = arr[i] * (i + 1);
            if (profit[i] >= total) {
            total = profit[i];
            price = arr[i];
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 1000, greater<int>());
    if (m >= n) cal_profit(n);
    else cal_profit(m);
    cout << price << " " << total << '\n';
    return 0;
}