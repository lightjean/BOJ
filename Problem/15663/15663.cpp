#include <iostream>
#include <algorithm>
using namespace std;

int n, m, tmp[8], cnt[8], num[8], ans[8]; // num은 중복이 없는 수만 저장, cnt에 각 수의 중복 개수를 저장
bool check[8] = {0};

void run(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        if (cnt[i] > 0) {
            cnt[i] -= 1;
            ans[index] = num[i];
            run(index + 1, n, m);
            cnt[i] += 1; // 원래대로
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> tmp[i];

    sort(tmp, tmp + n);

    // 중복되는 수열이 생기지 않도록 
    int k = 0, c = 1, x = tmp[0]; // k는 현재 수, c는 중복된 개수

    for (int i = 1; i < n; i++) {
        if (x == tmp[i]) { // 중복된 수가 존재
            c += 1;
        } else { // 중복된 수가 더 이상 없을 때
            num[k] = x;
            cnt[k] = c;
            k += 1;
            x = tmp[i];
            c = 1;
        }
    } 
    num[k] = x;
    cnt[k] = c;

    run(0, k + 1, m); // k + 1은 중복이 없는 수의 개수
    return 0;
}