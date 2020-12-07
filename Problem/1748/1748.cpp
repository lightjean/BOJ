#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int ans = 0, len;
    string n;
    vector<int> v(9, 0);

    cin >> n;
    len = n.size();
    
    v[1] = (9 - 1 + 1) * 1;
    v[2] = (99 - 10 + 1) * 2;
    v[3] = (999 - 100 + 1) * 3;
    v[4] = (9999 - 1000 + 1) * 4;
    v[5] = (99999 - 10000 + 1) * 5;
    v[6] = (999999 - 100000 + 1) * 6;
    v[7] = (9999999 - 1000000 + 1) * 7;
    v[8] = (99999999 - 10000000 + 1) * 8;

    for (int i = 1; i < n.size(); i++)
        ans += v[i];

    ans += (stoi(n) - pow(10, n.size() - 1) + 1) * n.size();
    cout << ans << '\n';
    return 0;
}