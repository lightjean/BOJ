#include <iostream>
#include <algorithm>
using namespace std;

int get_abs(int x) {
    if (x < 0) return -x;
    else return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, arr[10000];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    long long int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            sum += get_abs(arr[i] - arr[j]);
        }
    }

    cout << sum * 2 << '\n';
    return 0;
}