#include <iostream>
using namespace std;

int main()
{
    int n = 0, temp = 0, three = 0, five = 0;

    cin >> n;

    temp = n;
    five = n / 5; // 5가 가장 큰 단위이므로 우선 나눔
    n -= 5 * five;

    if(!n) { // 5로 나누어졌을 때
        cout << five << '\n';
    } else if(!(n % 3)) { // 5로 전부 나누어지지 않았는데 남은게 3으로 나누어질 때
        three = n / 3;
        cout << three + five << '\n';
    } else if(!(temp % 3)) { // 3으로만 나누어질 때
        three = temp / 3;
        cout << three << '\n';
    } else cout << -1 << '\n'; // 아예 안될 때

    return 0;
}
