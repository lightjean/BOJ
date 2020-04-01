#include <iostream>
using namespace std;

int main()
{
    int a, b, num = 1, cnt = 0, series[1000] = {0}, sum = 0;

    cin >> a >> b;

    while(cnt != 1000) {
        for(int i = 0; i < num; i++) {
            series[cnt] = num;
            cnt++;

            if(cnt == 1000) {
                break;
            }
        }
        num++;
    }

    for(int i = a - 1; i < b; i++) {
        sum += series[i];
    }

    cout << sum << '\n';
    return 0;
}