#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t, cnt = 0;
    bool check = false;

    cin >> n >> t;

    while(t--) {
        if(cnt == 2 * n) { // 증가해야 하는지 감소해야 하는지 확인
            check = true;
        } else if(cnt == 1) {
            check = false;
        }

        if(check) {
            cnt--;
        } else {
            cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}