#include <iostream>
using namespace std;

int main() {
    int a, t, sign;
    cin >> a >> t >> sign;

    int now = 0, cnt_sign[2] = {0}, turn = 1;
    while (1) {
        cnt_sign[0] += 1; // 번
        if (cnt_sign[sign] == t) break;
        now += 1;
        if (now == a) now = 0;
        cnt_sign[1] += 1; // 데기
        if (cnt_sign[sign] == t) break;
        now += 1;
        if (now == a) now = 0;
        cnt_sign[0] += 1; // 번
        if (cnt_sign[sign] == t) break;
        now += 1;
        if (now == a) now = 0;
        cnt_sign[1] += 1; // 데기
        if (cnt_sign[sign] == t) break;
        now += 1;
        if (now == a) now = 0;

        for (int i = 0; i <= turn; i++) { // 번 x n
            cnt_sign[0] += 1;
            if (cnt_sign[sign] == t) break;
            now += 1;
            if (now == a) now = 0;
        }

        if (cnt_sign[sign] == t) break;

        for (int i = 0; i <= turn; i++) { // 데기 x n
            cnt_sign[1] += 1;
            if (cnt_sign[sign] == t) break;
            now += 1;
            if (now == a) now = 0;
        }

        if (cnt_sign[sign] == t) break;
        turn += 1;
    }

    cout << now << '\n';
    return 0;
}