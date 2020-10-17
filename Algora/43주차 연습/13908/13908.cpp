#include <iostream>
using namespace std;

int n, m, password[7], hint[7];

bool check(int a) { // 선견지명으로 알게 된 비번의 일부 숫자가 모두 있는지 검사
    bool password[10] = {0};

    for (int i = 0; i < n; i++) {
        password[a % 10] = 1;
        a /= 10;
    }

    for (int i = 0; i < m; i++)
        if (!password[hint[i]])
            return 0;

    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    for (int i = 0; i < m; i++)
        cin >> hint[i];

    int end = 1;
    for (int i = 0; i < n; i++)
        end *= 10;

    int cnt = 0;
    for (int i = 0; i < end; i++)
        if (check(i))
            cnt++;

    cout << cnt << '\n';
    return 0;
}