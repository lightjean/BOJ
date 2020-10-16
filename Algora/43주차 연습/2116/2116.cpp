#include <iostream>
using namespace std;

int find_equal(int prev_dice_of_top, int row, int dice[][6]) { // 현재 주사위에서 아래 주사위의 마주 보는 면과 같을 때 현재 주사위의 윗면 값 반환
    int res;
    for (int i = 0; i < 6; i++) {
        if (dice[row][i] == prev_dice_of_top) {
            if (i == 0) res = dice[row][5];
            else if (i == 1) res = dice[row][3];
            else if (i == 2) res = dice[row][4];
            else if (i == 3) res = dice[row][1];
            else if (i == 4) res = dice[row][2];
            else res = dice[row][0];
        }
    }
    return res;
}

int find_max(int under, int top, int row, int dice[][6]) { // 주사위 옆면의 최대값을 구함
    int res = 0;
    for (int i = 0; i < 6; i++) {
        if (dice[row][i] == under || dice[row][i] == top) continue;
        if (res < dice[row][i]) res = dice[row][i];
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, dice[10000][6];
    cin >> n;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < 6; j++) 
            cin >> dice[i][j];

    int res = 0;
    for (int i = 0; i < 6; i++) {
        int top, sum = 0;
        if (i == 0) top = dice[0][5];
        else if (i == 1) top = dice[0][3];
        else if (i == 2) top = dice[0][4];
        else if (i == 3) top = dice[0][1];
        else if (i == 4) top = dice[0][2];
        else top = dice[0][0];
        sum += find_max(dice[0][i], top, 0, dice);

        for (int i = 1; i < n; i++) {
            int under = top;
            top = find_equal(under, i, dice);
            sum += find_max(under, top, i, dice);
        }

        if (res < sum) res = sum;
    }

    cout << res << '\n';
    return 0;
}