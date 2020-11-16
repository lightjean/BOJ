#include <iostream>
using namespace std;

int main()
{
    int n, x, y, sum = 0;
    bool line[10000] = {false};

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;

        for(int j = x - 1; j < y - 1; j++) {
            line[j] = true;
        }
    }

    for(int i = 0; i < 10000; i++) {
        if(line[i]) {
            sum++;
        }
    }

    cout << sum << '\n';
    return 0;
} // 배열을 수직선으로 생각할 때 눈금 사이의 칸을 배열로 생각s