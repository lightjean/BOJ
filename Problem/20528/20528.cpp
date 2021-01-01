#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt[27] = {0}, check = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        cnt[str[0] - 'a' + 1] += 2;
    }

    for (int i = 1; i <= 26; i++)
        if (cnt[i] != 0) check++;
        
    if (check != 1) {
        cout << 0 << '\n';
    } else {
        cout << 1 << '\n';
    }
    return 0;
}