#include <iostream>
using namespace std;

int main()
{
    int n, cup = 1, idx = 0;
    string str;

    cin >> n >> str;

    while(str[idx] != '\0') {
        if(str[idx] == 'S') {
            idx++;
        } else idx += 2;

        cup++;
    }

    if(n < cup) cout << n << '\n';
    else cout << cup << '\n';

    return 0;
} // 컵홀더가 남는 경우가 있을 수 있음