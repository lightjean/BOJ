#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> m;
        sum += m;
    }

    cout << sum - n + 1 << '\n';
    return 0;
}