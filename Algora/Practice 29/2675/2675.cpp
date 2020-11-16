#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--) {
        int r;
        char s[21];

        cin >> r >> s;

        for(int i = 0; i < strlen(s); i++) {
            for(int j = 0; j < r; j++) {
                cout << s[i];
            }
        }

        cout << '\n';
    }

    return 0;
}