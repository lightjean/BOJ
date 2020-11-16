#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int pow_int(int a, int b) { // 거듭제곱 계산
    int ans = 0;

    if(b == 0) {
        return 1;
    } else {
        return a * pow_int(a, b - 1);
    }
}

int main() {
    int b, temp, ans = 0, idx = 0;
    string n;

    cin >> n >> b;

    for(int i = n.length(); i > 0; i--) {
        if(n[i - 1] >= 'A' && n[i - 1] <= 'Z') {
            temp = n[i - 1] - 55;
        } else {
            temp = n[i - 1];
        }

        cout << temp << '\n';

        ans += temp * pow_int(b, idx);
        idx++;
    }

    cout << ans << '\n';
    return 0;
}