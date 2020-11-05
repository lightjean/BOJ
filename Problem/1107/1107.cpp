#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0;
    bool button[10] = {0};
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        button[tmp] = 1;
    }

    int ch_num, min_gap = 1000000;
    
    for (int i = 0; i <= 1000000; i++) {
        int num = i;
        bool flag = 1;

        while (num >= 10) { // 만들 수 있는 채널인지 검사
            if (button[num % 10] == 1) {
                flag = 0;
                break;
            }
            num /= 10;
        }
        if (flag && button[num % 10] == 1) flag = 0;

        if (flag) {
            if (abs(n - i) < min_gap) {
                min_gap = abs(n - i);
                ch_num = i;
            }
        }
    }

    if (abs(n - 100) > min_gap + to_string(ch_num).size()) {
        cout << min_gap + to_string(ch_num).size() << '\n';
    } else {
        cout << abs(n - 100) << '\n';
    }
    return 0;
}