#include <iostream>
using namespace std;

int main() {
    int r, c, k, br, bc, sr, sc, x, y, direction[4], cnt = 0;
    char room[1000][1000];

    cin >> r >> c;
    cin >> k;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            room[i][j] = '*';
        }
    }

    for(int i = 0; i < k; i++) {
        cin >> br >> bc;
        room[br][bc] = 'x';
    }

    cin >> sr >> sc;
    x = sr;
    y = sc;
    room[x][y] = '.';

    for(int i = 0; i < 4; i++) {
        cin >> direction[i];
    }

    while(1) {
        bool stop = false;

        if(direction[cnt] == 1) {
            while(!stop) {
                if(x - 1 == -1 || room[x - 1][y] != '*') {
                    stop = true;
                } else {
                    x -= 1;
                    room[x][y] = '.';
                }
            }
        } else if(direction[cnt] == 2) {
            while(!stop) {
                if(x + 1 == r || room[x + 1][y] != '*') {
                    stop = true;
                } else {
                    x += 1;
                    room[x][y] = '.';
                }
            }
        } else if(direction[cnt] == 3) {
            while(!stop) {
                if(y - 1 == -1 || room[x][y - 1] != '*') {
                    stop = true;
                } else {
                    y -= 1;
                    room[x][y] = '.';
                }
            }
        } else {
            while(!stop) {
                if(y + 1 == c || room[x][y + 1] != '*') {
                    stop = true;
                } else {
                    y += 1;
                    room[x][y] = '.';
                }
            }
        }

        if((x - 1 == -1 || room[x - 1][y] != '*') && (x + 1 == r || room[x + 1][y] != '*') && (y - 1 == -1 || room[x][y - 1] != '*') && (y + 1 == c || room[x][y + 1] != '*')) {
            cout << x << " " << y;
            break;
        }

        if(cnt == 3) {
            cnt = 0;
        } else {
            cnt++;
        }
    }

    return 0;
}