#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, row, col;

    cin >> a >> b >> c;

    col = sqrt(pow(a, 2) / (pow((b / c), 2) + 1));
    row = (b / c) * col;

    cout << (int)row << " " << (int)col << '\n';
    return 0;
}