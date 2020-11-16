#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = -1;
    bool check[246913] = {false};

    for(int i = 2; i <= 246912; i++) { // 에라토스테네스의 체
        if(check[i] == false) {
            for(int j = i * 2; j <= 246912; j += i) {
                check[j] = true;
            }
        }
    }

    while(1) {
        int cnt = 0;
        cin >> n;

        if(n == 0) {
            break;
        }
        
        for(int i = n + 1; i <= 2 * n; i++) {
            if(check[i] == false) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}