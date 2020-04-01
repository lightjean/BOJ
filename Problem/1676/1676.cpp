#include <iostream>
using namespace std;

int main()
{
    int n, num = 1, cnt = 0;

    cin >> n;

    while(n >= 5 * num) {
        for(int i = 1; i <= n; i++) {
            if(i % (5 * num) == 0) { // 0의 개수는 소인수분해했을 때 10의 개수, 즉 5의 개수와 같음
                cnt++;
            }
        }

        num *= 5;
    }

    cout << cnt << '\n';
    return 0;
}