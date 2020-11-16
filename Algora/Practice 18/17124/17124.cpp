#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, min1, min2;

    cin >> t;

    while(t--) {
        cin >> n >> m;

        int a[n], b[m], c[n], sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }

        for(int i = 0; i < n; i++) {
            min1 = 1000000000;
            min2 = 1000000000;

            for(int j = 0; j < m; j++) {
                if(abs(a[i] - b[j]) < min1) { // 차이가 가장 작은 수 찾기
                    min1 = abs(a[i] - b[j]);
                    min2 = b[j];
                } else if(abs(a[i] - b[j]) == min1) { // 위 조건을 만족하는 값이 더 있는 경우
                    if(b[j] < min2) min2 = b[j];
                }
            }
            
            c[i] = min2;
        }

        for(int i = 0; i < n; i++) {
            sum += c[i];
        }

        cout << sum << '\n';
    }

    return 0;
}