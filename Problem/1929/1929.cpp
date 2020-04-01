#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, prime[1000001];
    bool check[1000001] = {false};

    cin >> m >> n;

    check[1] = true;

    for(int i = 2; i <= n; i++) {
        if(check[i] == false) {
            prime[i] = i;

            for(int j = i * 2; j <= n; j += i) {
                check[j] = true;
            }
        }
    }

    for(int i = m; i <= n; i++) {
        if(check[i] == false) {
            cout << prime[i] << '\n';
        }
    }

    return 0;
}