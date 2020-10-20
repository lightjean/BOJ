#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, s, t;
    cin >> t;

    while (t--) {
        int i, cnt_a, cnt_b;
        bool flag = 0;
        cin >> a >> b >> s;
        if (a > b) {
            i = s / a; // 가장 큰 화폐로 가질 수 있는 화폐 수
            while (i >= 0) {
                int tmp = s;
                tmp -= a * i;
                if (tmp % b == 0) {
                    flag = 1;
                    cnt_a = i;
                    cnt_b = tmp / b;
                    break;
                }
                i--;
            }
        } else {
            i = s / b; // 가장 큰 화폐로 가질 수 있는 화폐 수
            while (i >= 0) {
                int tmp = s;
                tmp -= b * i;
                if (tmp % a == 0) {
                    flag = 1;
                    cnt_a = tmp / a;
                    cnt_b = i;
                    break;
                }
                i--;
            }
        }
        if (flag)
            cout << cnt_a << " " << cnt_b << '\n';
        else
            cout << "Impossible" << '\n';
    }
    return 0;
}