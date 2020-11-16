#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    char a[100];

    cin >> num;
    cin >> a;

    for(int i = 0; i < num; i++) {
        sum += a[i] - '0';
    }

    cout << sum << '\n';
    return 0;
}