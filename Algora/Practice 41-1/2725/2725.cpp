#include <iostream>
using namespace std;

int gcd(int a, int b) { // 최대공약수
    int r;
    while (b != 0) { // a % b의 modulo 계산에서 b가 0이 될 수 없음
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, c, arr[1001]= {0, 2}; // 기울기 1을 포함한 y=x 기준 반쪽 짜리 기울기 개수의 누적 합
    cin >> c;

    for (int i = 2; i <= 1000; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (gcd(i, j) == 1) cnt++; // 기울기가 약분되는 경우는 제외하여 카운팅
        }
        arr[i] = arr[i - 1] + cnt;
    }

    while (c--) {
        cin >> n;
        cout << arr[n] * 2 - 1 << '\n'; // arr에는 반쪽 짜리 기울기 개수만 들어 있으므로 2배한 후 중복되는 기울기 1짜리 제외
    }
    return 0;
}