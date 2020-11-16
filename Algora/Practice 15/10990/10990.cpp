#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    char star[200];

    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        star[i] = ' ';
    }

    star[n-1] = '*';

    for(int i = 0; i < n; i++) {
        cout << star[i];
    }

    star[n-1] = ' ';

    for(int i = 0; i < n-1; i++) {
        cout << '\n';
        star[n - 2 - i] = '*';
        star[n + i] = '*';

        for(int j = 0; j <= n + i; j++) {
            cout << star[j];
        }

        star[n - 2 - i] = ' ';
        star[n + i] = ' ';
    }
    return 0;
}