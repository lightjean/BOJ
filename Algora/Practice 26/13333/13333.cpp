#include <iostream>
using namespace std;

int main()
{
    int n, q, arr[1000];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i <= n; i++) {
        int cnt = 0;

        for(int j = 0; j < n; j++) { // k번 이상 인용된 논문 수 세기
            if(arr[j] >= i) {
                cnt++;
            }
        }

        if(cnt >= i) { // 앞에서 센 논문 수가 k편 이상이면
            q = i;
        }
    }

    cout << q << '\n';
    return 0;
}