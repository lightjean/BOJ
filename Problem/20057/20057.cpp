#include <iostream>
#include <vector>
using namespace std;

void move_sand(int r, int c, int direction, vector<vector<int>> &map) { // 이동한 토네이도에 대한 모래 이동
    int tmp = map[r][c];
    if (direction == 0) { // 왼쪽
        map[r][c - 2] += (int)(tmp * 0.05);
        map[r][c] -= (int)(tmp * 0.05);
        map[r - 1][c - 1] += (int)(tmp * 0.1);
        map[r][c] -= (int)(tmp * 0.1);
        map[r + 1][c - 1] += (int)(tmp * 0.1);
        map[r][c] -= (int)(tmp * 0.1);
        map[r - 2][c] += (int)(tmp * 0.02);
        map[r][c] -= (int)(tmp * 0.02);
        map[r + 2][c] += (int)(tmp * 0.02);
        map[r][c] -= (int)(tmp * 0.02);
        map[r - 1][c] += (int)(tmp * 0.07);
        map[r][c] -= (int)(tmp * 0.07);
        map[r + 1][c] += (int)(tmp * 0.07);
        map[r][c] -= (int)(tmp * 0.07);
        map[r - 1][c + 1] += (int)(tmp * 0.01);
        map[r][c] -= (int)(tmp * 0.01);
        map[r + 1][c + 1] += (int)(tmp * 0.01);
        map[r][c] -= (int)(tmp * 0.01);
        map[r][c - 1] += map[r][c];
        map[r][c] = 0;
    } else if (direction == 1) { // 아래쪽
        map[r + 2][c] += (int)(tmp * 0.05);
        map[r][c] -= (int)(tmp * 0.05);
        map[r + 1][c - 1] += (int)(tmp * 0.1);
        map[r][c] -= (int)(tmp * 0.1);
        map[r + 1][c + 1] += (int)(tmp * 0.1);
        map[r][c] -= (int)(tmp * 0.1);
        map[r][c - 2] += (int)(tmp * 0.02);
        map[r][c] -= (int)(tmp * 0.02);
        map[r][c + 2] += (int)(tmp * 0.02);
        map[r][c] -= (int)(tmp * 0.02);
        map[r][c - 1] += (int)(tmp * 0.07);
        map[r][c] -= (int)(tmp * 0.07);
        map[r][c + 1] += (int)(tmp * 0.07);
        map[r][c] -= (int)(tmp * 0.07);
        map[r - 1][c - 1] += (int)(tmp * 0.01);
        map[r][c] -= (int)(tmp * 0.01);
        map[r - 1][c + 1] += (int)(tmp * 0.01);
        map[r][c] -= (int)(tmp * 0.01);
        map[r + 1][c] += map[r][c];
        map[r][c] = 0;
    } else if (direction == 2) { // 오른쪽
        map[r][c + 2] += (int)(tmp * 0.05);
        map[r][c] -= (int)(tmp * 0.05);
        map[r - 1][c + 1] += (int)(tmp * 0.1);
        map[r][c] -= (int)(tmp * 0.1);
        map[r + 1][c + 1] += (int)(tmp * 0.1);
        map[r][c] -= (int)(tmp * 0.1);
        map[r - 2][c] += (int)(tmp * 0.02);
        map[r][c] -= (int)(tmp * 0.02);
        map[r + 2][c] += (int)(tmp * 0.02);
        map[r][c] -= (int)(tmp * 0.02);
        map[r - 1][c] += (int)(tmp * 0.07);
        map[r][c] -= (int)(tmp * 0.07);
        map[r + 1][c] += (int)(tmp * 0.07);
        map[r][c] -= (int)(tmp * 0.07);
        map[r - 1][c - 1] += (int)(tmp * 0.01);
        map[r][c] -= (int)(tmp * 0.01);
        map[r + 1][c - 1] += (int)(tmp * 0.01);
        map[r][c] -= (int)(tmp * 0.01);
        map[r][c + 1] += map[r][c];
        map[r][c] = 0;
    } else { // 위쪽
        map[r - 2][c] += (int)(tmp * 0.05);
        map[r][c] -= (int)(tmp * 0.05);
        map[r - 1][c - 1] += (int)(tmp * 0.1);
        map[r][c] -= (int)(tmp * 0.1);
        map[r - 1][c + 1] += (int)(tmp * 0.1);
        map[r][c] -= (int)(tmp * 0.1);
        map[r][c - 2] += (int)(tmp * 0.02);
        map[r][c] -= (int)(tmp * 0.02);
        map[r][c + 2] += (int)(tmp * 0.02);
        map[r][c] -= (int)(tmp * 0.02);
        map[r][c - 1] += (int)(tmp * 0.07);
        map[r][c] -= (int)(tmp * 0.07);
        map[r][c + 1] += (int)(tmp * 0.07);
        map[r][c] -= (int)(tmp * 0.07);
        map[r + 1][c - 1] += (int)(tmp * 0.01);
        map[r][c] -= (int)(tmp * 0.01);
        map[r + 1][c + 1] += (int)(tmp * 0.01);
        map[r][c] -= (int)(tmp * 0.01);
        map[r - 1][c] += map[r][c];
        map[r][c] = 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    vector<vector<int>> map(n + 4, vector<int>(n + 4, 0));

    for (int i = 2; i < n + 2; i++)
        for (int j = 2; j < n + 2; j++)
            cin >> map[i][j];

    int direction = 0, move_length = 1, x = n / 2 + 2, y = n / 2 + 2; // 중심에서 시작

    while (1) { // direction 값이 0은 왼쪽, 1은 아래쪽, 2는 오른쪽, 3은 위쪽
        if (x == 2 && y == 2) break;
        if (direction == 0) {
            for (int k = 0; k < move_length; k++) {
                y -= 1;
                move_sand(x, y, direction, map);
                if (x == 2 && y == 2) break;
            }
            direction = 1;
        } else if (direction == 1) {
            for (int k = 0; k < move_length; k++) {
                x += 1;
                move_sand(x, y, direction, map);
            }
            direction = 2;
            move_length += 1;
        } else if (direction == 2) {
            for (int k = 0; k < move_length; k++) {
                y += 1;
                move_sand(x, y, direction, map);
            }
            direction = 3;
        } else {
            for (int k = 0; k < move_length; k++) {
                x -= 1;
                move_sand(x, y, direction, map);
            }
            direction = 0;
            move_length += 1;
        }
    }

    for (int i = 0; i < n + 4; i++) {
        for (int j = 0; j < n + 4; j++) {
            sum1 += map[i][j];
        }
    }

    for (int i = 2; i < n + 2; i++) {
        for (int j = 2; j < n + 2; j++) {
            sum2 += map[i][j];
        }
    }

    cout << sum1 - sum2 << '\n';
    return 0;
}