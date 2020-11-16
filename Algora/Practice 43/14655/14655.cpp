#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, round1[10000], round2[10000];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> round1[i];
    for (int i = 0; i < n; i++)
        cin >> round2[i];

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) { // 굳이 3개씩 뒤집을 필요가 없음
        if (round1[i] < 0) round1[i] *= -1;
        sum1 += round1[i];
        if (round2[i] > 0) round2[i] *= -1;
        sum2 += round2[i];
    }

    cout << sum1 - sum2 << '\n';
    return 0;
}