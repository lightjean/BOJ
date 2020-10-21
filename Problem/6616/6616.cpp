#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (1) {
        int n, cnt = 0;
        string str;

        cin >> n;
        if (n == 0) break;

        cin.ignore();
        getline(cin, str);

        for (int i = 0; i < str.size(); i++) {
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
                cnt++;
        }

        char arr[cnt + 1];

        int j = 0, start = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
                if (j > cnt - 1) { // 문자열 끝에 다다른 경우
                    start++;
                    j = start;
                }
                arr[j] = toupper(str[i]);
                j += n;
            }
        }

        for (int i = 0; i < cnt; i++) {
            cout << arr[i];
        }
        cout << '\n';
    }
    return 0;
}