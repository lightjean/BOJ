#include <iostream>
using namespace std;

int main()
{
    int h, m;

    cin >> h >> m;

    if(m - 45 < 0) {
        m = 60 + (m - 45);
        if(h - 1 < 0) {
            h = 24 + (h - 1);
        } else {
            h--;
        }
        cout << h << " " << m << '\n';
    } else {
        cout << h << " " << m - 45 << '\n';
    }
    return 0;
}