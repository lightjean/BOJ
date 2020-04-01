#include <iostream>
using namespace std;

int main()
{
    int n;
    char star[200];

    cin >> n;

    for(int i = 0; i < 2 * n - 1; i++) {
        star[i] = '*';
        cout << star[i];
    }

    for(int i = 0; i < n - 1; i++) {
        cout << '\n';
        star[i] = ' ';
        for(int j = 0; j < 2 * n - 2 - i; j++) {
            cout << star[j];
        }
    }

    return 0;
}