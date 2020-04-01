#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, m, cnt_2 = 0, cnt_5 = 0;

    cin >> n >> m;


    for(long long i = 2; i <= n; i *= 2) {
        cnt_2 += n / i;
    }

    for(long long i = 2; i <= n - m; i *= 2) {
        cnt_2 -= (n - m) / i;
    }


    for(long long i = 2; i <= m; i *= 2) {
        cnt_2 -= m / i;
    }


    for(long long i = 5; i <= n; i *= 5) {
        cnt_5 += n / i;
    }

    for(long long i = 5; i <= n - m; i *= 5) {
        cnt_5 -= (n - m) / i;
    }

    for(long long i = 5; i <= m; i *= 5) {
        cnt_5 -= m / i;
    }

    cout << min(cnt_2, cnt_5) << '\n';

    return 0;
}