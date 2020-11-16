#include <iostream>
using namespace std;

int main()
{
    int n, r, c;
    char carrot[100][100];

    cin >> n >> r >> c;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << ((((i % 2) ^ (j % 2)) == (((r - 1) % 2) ^ ((c - 1) % 2))) ? 'v' : '.');
        }
        cout << '\n';
    }
    return 0;
} // 조건 연산자와 비트 연산자를 이용해 더 간단하게 할 수 있음.

/*int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r, c, cnt = 1;
    char carrot[100][100];

    cin >> n >> r >> c;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            carrot[i][j] = '.';
        }
    }

    while(cnt <= n) {
        if(((r - 1) % 2 == 0 && (c - 1) % 2 == 0) || (((r - 1) % 2) == 1 && (c - 1) % 2 == 1)) {
            if(cnt % 2 == 1) {
                for(int i = 0; i < n / 2 + 1; i++) {
                    carrot[cnt - 1][i * 2] = 'v';
                }
            } else {
                for(int i = 0; i < n / 2; i++) {
                    carrot[cnt - 1][i * 2 + 1] = 'v';
                }
            }
            cnt++;
        }

        if(((r - 1) % 2 == 0 && (c - 1) % 2 == 1) || (((r - 1) % 2) == 1 && (c - 1) % 2 == 0)) {
            if(cnt % 2 == 1) {
                for(int i = 0; i < n / 2; i++) {
                    carrot[cnt - 1][i * 2 + 1] = 'v';
                }
            } else {
                for(int i = 0; i < n / 2 + 1; i++) {
                    carrot[cnt - 1][i * 2] = 'v';
                }
            }
            cnt++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << carrot[i][j];
        }
        cout << '\n';
    }
    return 0;
}*/