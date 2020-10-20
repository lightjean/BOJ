#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] += 13;
            if (str[i] > 'z' || str[i] < 0) { // char형은 -128 ~ 127이므로 overflow가 발생할 수 있음에 주의
                str[i] -= 26;
            }
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 13;
            if (str[i] > 'Z') {
                str[i] -= 26;
            }
        }
    }

    cout << str << '\n';
    return 0;
}