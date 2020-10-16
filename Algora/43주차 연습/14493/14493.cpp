#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a, b, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        //bool flag = 0;
        cin >> a >> b;

        temp = ans % (a + b); // while문에 쓴 거랑 같음
        if (temp <= b) ans += b - temp;

        ans += 1;

        /*while (1) {
            if (flag == 0 && temp <= b) {
                ans += b - temp + 1;
                break;
            }
            else {
                temp -= b;
                flag = 1;
            }
            if (flag == 1 && temp < a) {
                ans += 1;
                break;
            }
            else {
                temp -= a;
                flag = 0;
            }
        }*/
    }

    cout << ans << '\n';
    return 0;
}