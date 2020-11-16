#include <iostream>
using namespace std;

char arr[50][50];

int search_row(int a, int b)
{
    int row = a;

    for(int i = 0; i < a; i++) { // 행마다 탐색
        for(int j = 0; j < b; j++) {
            if(arr[i][j] == 'X') {
                row--;
                break;
            }
        }
    }

    return row;
}

int search_col(int a, int b)
{
    int col = b;

    for(int i = 0; i < b; i++) { // 열마다 탐색
        for(int j = 0; j < a; j++) {
            if(arr[j][i] == 'X') {
                col--;
                break;
            }
        }
    }

    return col;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    if(search_row(n, m) > search_col(n, m)) { // 빈 열, 빈 행중 가장 큰것을 출력
        cout << search_row(n, m) << '\n';
    } else cout << search_col(n, m) << '\n';

    return 0;
}