#include <iostream>
using namespace std;

int main() {
    long long int n, m, temp;
    cin >> n >> m;

    temp = n - m;

    if(temp >= 0) cout << temp << '\n';
    else cout << -temp << '\n';

    return 0;
}