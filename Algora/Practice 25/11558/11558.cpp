#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, arr[10000];

    cin >> t;

    while(t--) {
        int n, pos, cnt = 0;
        bool finish = false;

        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        pos = 0;

        for(int i = 0; i < n; i++) {
            if(pos != n - 1) {
                pos = arr[pos] - 1;
                cnt++;

                if(cnt == n) {
                    finish = true;
                }
            } else if(pos == n - 1) {
                cout << cnt << '\n';
                break;
            }
        }

        if(finish == true && pos != n - 1) {
            cout << 0 << '\n';
        }
    }

    return 0;
}