#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, c;
    cin >> h >> w >> c;

    int x = 0, y = 0;
    bool direction = 0;
    vector<vector<int>> board(h, vector<int>(w));

    for (int i = 1; i <= c; i++) {
        int marble;
        cin >> marble;

        while (marble--) {
            board[x][y] = i;
            if (direction == 0) {
                if (y == w - 1) {
                    x += 1;
                    direction = 1;
                }
                else {
                    y += 1;
                }
            }
            else {
                if (y == 0) {
                    x += 1;
                    direction = 0;
                }
                else {
                    y -= 1;
                }
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << board[i][j];
        }
        cout << '\n';
    }
    
    return 0;
}