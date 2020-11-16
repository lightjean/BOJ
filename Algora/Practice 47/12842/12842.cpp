#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, m;
    cin >> n >> s >> m;

    vector<int> eat_time(m);

    for (int i = 0; i < m; i++)
        cin >> eat_time[i];

    int t = 0, num;
    while (n != s) {
        for (int i = 0; i < m; i++) {
            if (t % eat_time[i] == 0) {
                num = i + 1;
                n -= 1;
            }
            if (n == s) break;
        }
        t += 1;
    }
    
    cout << num << '\n';
    return 0;
}