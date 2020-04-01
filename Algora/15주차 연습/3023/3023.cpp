#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c, a, b;
    char card[100][100];
    string str;

    cin >> r >> c;

    for(int i = 0; i < r; i++) {
        cin >> str;

        for(int j = 0; j < c; j++) {
            card[i][j] = str[j];
            card[i][2 * c - 1 - j] = str[j];
            card[2 * r - 1 - i][j] = str[j];
            card[2 * r - 1 - i][2 * c - 1 - j] = str[j];
        }
    }

    cin >> a >> b;

    if(card[a-1][b-1] == '#') {
        card[a-1][b-1] = '.';
    } else card[a-1][b-1] = '#';

    for(int i = 0; i < 2 * r; i++) {
        for(int j = 0; j < 2 * c; j++) {
            cout << card[i][j];
        }
        cout << '\n';
    }
    return 0;
} // 배열 크기를 생각 못해서 런타임 에러가 남