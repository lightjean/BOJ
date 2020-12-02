#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, index = 1;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;

        vector<int> v(m);
        cout << "Case " << index << ":\n";

        for (int i = 0; i < m; i++) {
            cin >> v[i];
            v[i]++;
            if (v[i] <= 6)
                cout << v[i] << '\n';
        }

        index++;
    }

    return 0;
}