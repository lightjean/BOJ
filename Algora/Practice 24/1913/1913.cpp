#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, find, find_x, find_y, start = 2, x, y, snail[999][999];

    cin >> n >> find;

    x = n / 2;
    y = n / 2;
    snail[x][y] = 1;

    for(int i = 0; i < n / 2; i++) {
        snail[--x][y] = start;
        start++;

        for(int j = 0; j < i * 2 + 1; j++) {
            snail[x][++y] = start;
            start++;
        }

        for(int j = 0; j < (i + 1) * 2; j++) {
            snail[++x][y] = start;
            start++;
        }

        for(int j = 0; j < (i + 1) * 2; j++) {
            snail[x][--y] = start;
            start++;
        }

        for(int j = 0; j < (i + 1) * 2; j++) {
            snail[--x][y] = start;
            start++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << snail[i][j] << " ";
            if(snail[i][j] == find) {
                find_x = i;
                find_y = j;
            }
        }

        cout << '\n';
    }

    cout << find_x + 1 << " " << find_y + 1 << '\n';
    return 0;
}