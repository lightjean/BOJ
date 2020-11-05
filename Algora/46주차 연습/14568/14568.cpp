#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    if (n < 6) { // n이 6 미만이면 경우의 수가 없음
        cout << cnt << '\n';
        return 0;
    }

    while (n / 2 != 0) {
        int tmp, a, b; // tmp는 영훈이와 남규가 나누어 가질 사탕 수, a는 영훈, b는 남규
        n -= 2; // 택희 꺼
        tmp = n - 2; // 영훈이와 남규 꺼 1개씩
        a = tmp;
        b = 0;

        for (int i = a; i - b >= 2; i--) {
            cnt += 1;
            b += 1;
        }
    }
    cout << cnt << '\n';
    return 0;
}