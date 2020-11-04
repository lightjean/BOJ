// 순서의 개념으로 풀었을 때
/*#include <iostream>
using namespace std;

int n, m, ans[8];

void run(int index, int start, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = start; i <= n; i++) {
        ans[index] = i;
        run(index + 1, i + 1, n, m);
    }
}

int main() {
    cin >> n >> m;
    run(0, 1, n, m);
    return 0;
}*/
// 선택의 개념으로 풀었을 때
#include <iostream>
using namespace std;

int n, m, ans[8];

void run(int index, int selected, int n, int m) { // index 수를 선택할지 말지 결정, selected는 지금까지 선택한 수의 개수
    if (selected == m) { // base case
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    if (index > n) return; // 고르는 수가 n을 벗어나면 종료
    ans[selected] = index;
    run(index + 1, selected + 1, n, m); // index 수를 선택할 때
    ans[selected] = 0;
    run(index + 1, selected, n, m); // index 수를 선택하지 않을 때
}

int main() {
    cin >> n >> m;
    run(1, 0, n, m);
    return 0;
}