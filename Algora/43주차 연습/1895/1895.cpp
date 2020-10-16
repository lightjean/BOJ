#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int r, c, t, image[40][40], filtered_image[38][38];
    cin >> r >> c;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> image[i][j];

    cin >> t;
    int filter[9];
    for (int i = 0; i + 3 <= r; i++) { // 필터 순회
        for (int j = 0; j + 3 <= c; j++) {
            filter[0] = image[i][j];
            filter[1] = image[i][j + 1];
            filter[2] = image[i][j + 2];
            filter[3] = image[i + 1][j];
            filter[4] = image[i + 1][j + 1];
            filter[5] = image[i + 1][j + 2];
            filter[6] = image[i + 2][j];
            filter[7] = image[i + 2][j + 1];
            filter[8] = image[i + 2][j + 2];
            sort(filter, filter + 9);
            filtered_image[i][j] = filter[4];
        }
    }

    int cnt = 0;
    for (int i = 0; i < r - 2; i++) {
        for (int j = 0; j < c - 2; j++) {
            if (filtered_image[i][j] >= t) cnt++;
        }
    }
    
    cout << cnt << '\n';
    return 0;
}