#include <iostream>
using namespace std;

int main() {
    int n, ans, min = 1000000;
    bool check = true;
    cin >> n;
    for (int i = 1; i <= 1000000; i++) {
        int sum = 0, temp = i;
        sum += i; // 자기 자신을 더함
        while (temp >= 10) { // 한 자리 남을 때까지
            sum += temp % 10;
            temp /= 10;
        }
        sum += temp;
        if (sum == n && i <= min) { // 생성자이면
            min = i;
            check = false;
            ans = i;
        }
    }
    if (check) { // 생성자가 없으면
        cout << 0 << '\n';
        return 0;
    }
    cout << ans << '\n';
    return 0;
}