#include <iostream>
using namespace std;

int main() {
    char chess[8][9];
    for (int i = 0; i < 8; i++) {
        cin >> chess[i];
    }
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0 && chess[i][j] == 'F') // 하얀 칸은 i + j가 짝수임
                cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}