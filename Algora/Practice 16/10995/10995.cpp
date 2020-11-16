#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 1;
    char star[200];

    cin >> n;

    for(int i = 0; i < n; i++) {
        star[2 * i] = '*';
        star[2 * i + 1] = ' ';
    }

    while(cnt <= n) {
        if(cnt % 2 == 1) {
            for(int i = 0; i < 2 * n - 1; i++) {
                cout << star[i];
            }
            cout << '\n';
            cnt++;
        } else {
            for(int j = 2 * n - 1; j >= 0; j--) {
                cout << star[j];
            }
            cout << '\n';
            cnt++;
        }
    }
    return 0;
}