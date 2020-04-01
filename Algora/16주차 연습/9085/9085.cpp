#include <iostream>
using namespace std;

int main()
{
    int t, n, num, sum;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        sum = 0;
        for(int j = 0; j < n; j++) {
            cin >> num;
            sum += num;
        }
        cout << sum << '\n';
    }
    return 0;
}