#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    bool error = false, check[2500] = {0}; // 알파벳 중복 사용 방지
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        int flag = 0; // 다음 와야할 알파벳 표시
        bool found = false; // 동일한 오리의 소리임을 표시
        for (int j = i; j < str.length(); j++) {
            if (flag == 0) {
                if (str[j] == 'q' && check[j] == 0) {
                    flag = 1;
                    check[j] = 1;
                }
            } else if (flag == 1) {
                if (str[j] == 'u' && check[j] == 0) {
                    flag = 2;
                    check[j] = 1;
                }
            } else if (flag == 2) {
                if (str[j] == 'a' && check[j] == 0) {
                    flag = 3;
                    check[j] = 1;
                }
            } else if (flag == 3) {
                if (str[j] == 'c' && check[j] == 0) {
                    flag = 4;
                    check[j] = 1;
                }
            } else if (flag == 4) {
                if (str[j] == 'k' && check[j] == 0) {
                    flag = 0;
                    check[j] = 1;
                    found = true; // 오리 소리 찾음
                }
            }
        }
        if (flag != 0) { // 소리가 잘못되었을 때
            cout << -1 << '\n';
            return 0;
        }
        if (found) {
            cnt++;
        }
    }
    for (int i = 0; i < str.length(); i++) { // 이 부분을 안넣어 주면 97퍼에서 틀림
        if (check[i] == 0) {
            error = true;
            break;
        }
    }
    if (error) cout << -1 << '\n';
    else cout << cnt << '\n';
    return 0;
}