#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum_row, sum_column, sum_cross1 = 0, sum_cross2 = 0, sum_check, matrix[101][101] = {0,};
    bool check1 = true, check2 = true, check3 = true, overlap[10001];
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> matrix[i][j];
    sum_check = n*(n*n+1)/2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(overlap[matrix[i][j]])
                check1 = false;
            overlap[matrix[i][j]] = true;
        }
    } // 행렬의 원소가 중복되는지 체크. bool 배열을 이용해 같은 원소가 2번 확인되면 false
    for(int i=0; i<n; i++){
        sum_row = 0;
        sum_column = 0;
        for(int j=0; j<n; j++){
            sum_row += matrix[i][j];
            sum_column += matrix[j][i];
        }
        if(sum_check!=sum_row||sum_check!=sum_column)
            check2 = false;
    } // 행과 열의 합이 일치하는지 검사. 둘 중 하나라도 일치하지 않으면 false
    for(int i=0; i<n; i++){
        sum_cross1 += matrix[i][i];
        sum_cross2 += matrix[i][n-1-i];
    }
    if(sum_check!=sum_cross1||sum_check!=sum_cross2)
        check3 = false; // 두 대각선 원소들의 합이 일치하는지 검사. 둘 중 하나라도 일치하지 않으면 false
    if(check1&&check2&&check3)
        cout << "TRUE";
    else cout << "FALSE";
    return 0;
}