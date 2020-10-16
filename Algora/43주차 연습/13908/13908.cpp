#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, password[7], hint[7];
    cin >> n >> m;

    for (int i = 0; i < m; i++)
        cin >> hint[i];

    int end = 1;
    for (int i = 0; i < n; i++)
        end *= 10;

    int cnt = 0;
    for (int i = 0; i < end; i++) {
        int temp = i, idx = 0;
        bool check[7] = {0};
        memset(password, -1, sizeof(password));

        while (1) { // 자리수 저장 및 검사
            if (idx == n)
                break;
            if (temp == 0)
                password[idx] = 0;
            else password[idx] = temp % 10;

            for (int j = 0; j < m; j++)
                if (password[idx] == hint[j])
                    check[j] = 1;
            
            temp /= 10;
            idx++;
        }

        bool flag = 1;
        for (int j = 0; j < m; j++)
            if (check[j] == 0)
                flag = 0;

        if (flag)
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}