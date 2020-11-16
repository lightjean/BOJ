#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, row_a, row_b, col_a, col_b;

    cin >> a >> b;

    if(a % 4 == 0) {
        row_a = 4;
        col_a = a / 4;
    } else {
        row_a = a % 4;
        col_a = a / 4 + 1;
    }

    if(b % 4 == 0) {
        row_b = 4;
        col_b = b / 4;
    } else {
        row_b = b % 4;
        col_b = b / 4 + 1;
    }

    cout << abs(row_a - row_b) + abs(col_a - col_b) << '\n';
    return 0;
}