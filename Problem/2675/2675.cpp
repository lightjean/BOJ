#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    string str;

    cin >> t;

    while (t--) {
        int r;
        cin >> r >> str;
        for (int i = 0; i < str.size(); i++) {
            for (int j = 0; j < r; j++) {
                cout << str[i];
            }
        }
        cout << '\n';
    }
    return 0;
}