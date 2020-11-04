#include <iostream>
using namespace std;

int n, m, ans[8];
bool check[10] = {0};

void run(int index, int n, int m) { // 재귀
    if (index == m) { // 재귀 종료 조건
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (check[i]) continue; // 이미 썼던 수이면 건너뛰기
        ans[index] = i; // 수 채우기
        check[i] = 1; // 썼던 수를 표시
        run(index + 1, n, m); // 재귀로 반복
        check[i] = 0; // 수열 하나 출력 후 표시했던 것 다 지우기
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    run(0, n, m);
    return 0;
}