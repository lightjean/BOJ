#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int E, S, M, year = 1;
    cin >> E >> S >> M;
    // 중국인의 나머지 정리로도 풀 수 있는데 뭔지 모르겠다
    // cout << (6916 * e + 4845 * s + 4200 * m - 1) % (15 * 28 * 19) + 1 << '\n';
    int e = 1, s = 1, m = 1;

    while (1) {
        if (e == E && s == S && m == M) break;
        e += 1;
        if (e == 16) e = 1;
        s += 1;
        if (s == 29) s = 1;
        m += 1;
        if (m == 20) m = 1;
        year += 1;
    }
    cout << year << '\n';
    return 0;
}