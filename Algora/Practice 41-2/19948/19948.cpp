#include <iostream>
using namespace std;

int main() {
    int space, cnt_space = 0, arr[26];
    bool check = false;
    string str;

    getline(cin, str);
    cin >> space;

    for (int i = 0; i < 26; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            cnt_space += 1;
        }
        str[i] = toupper(str[i]); // 소문자로 대문자로
        arr[(int)str[i] - 65] -= 1;
    }

    if (cnt_space > space) check = true;
    for (int i = 0; i < 26; i++) {
        if (arr[i] < 0) check = true;
    }
    if (check) {
        cout << -1 << '\n';
        return 0;
    }

    for (int i = 0; i < str.length(); i++) {
        if (i == 0) cout << str[i];
        else if (str[i] == ' ') cout << str[i + 1];
    }
    return 0;
}