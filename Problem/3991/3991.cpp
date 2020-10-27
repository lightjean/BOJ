#include <iostream>
using namespace std;

int main() {
    int h, w, c, marble;
    cin >> h >> w >> c;
    int a = 0, b = 0, board[h][w];
    bool check = 0;
    for (int i = 0; i < c; i++) {
        cin >> marble;
        
        while (marble--) {
            board[a][b] = i + 1;
            
            if (check == 0) { // 오른쪽으로 진행
                if (b == w - 1) {
                    a++;
                    check = 1; // 왼쪽으로 방향 바꾸기
                    continue;
                } else b++;
            }

            if (check == 1) { // 왼쪽으로 진행
                if (b == 0) {
                    a++;
                    check = 0; // 오른쪽으로 방향 바꾸기
                    continue;
                } else b--;
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