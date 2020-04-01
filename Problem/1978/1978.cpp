#include <iostream>
using namespace std;

bool prime(int n) {
    if(n < 2) {
        return false;
    }

    for(int i = 2; i * i <= n; i++) { // 시간 복잡도 O(N^(1/2))
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    int n, num, cnt = 0;

    cin >> n;

    while(n--) {
        cin >> num;

        if(prime(num)) {
            cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}