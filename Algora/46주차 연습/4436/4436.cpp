#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    while (cin >> n) {
        int k = 1;
        bool check[10] = {0}, flag = 0;
        
        while (1) {
            long long int num = k * stoll(n);

            while (num >= 10) {
                check[num % 10] = 1;
                num /= 10;
            }
            check[num] = 1;

            flag = 1;
            for (int i = 0; i < 10; i++) {
                if (check[i] == 0) {
                    flag = 0;
                }
            }

            if (flag) break;
            k += 1;
        }
        cout << k << '\n';
    }
    return 0;
}