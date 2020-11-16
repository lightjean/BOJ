#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;

    while (1) {
        cin >> n;
        if (cin.eof()) break;

        string str = "-";

        for (int i = 1; i <= n; i++) {
            string tmp = "", whitespace = " ";
            tmp += str;

            for (int j = 0; j < pow(3, i - 1); j++) {
                tmp += whitespace;
            }
            tmp += str;
            str = tmp;
        }
        cout << str << '\n';
    }
    return 0;
}