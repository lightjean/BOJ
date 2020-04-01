#include <iostream>
using namespace std;

int main()
{
    int t, r;
    string s;

    cin >> t;

    while(t--) {
        int idx = 0;

        cin >> r >> s;

        while(s[idx] != '\0') {
            for(int i = 0; i < r; i++) {
                cout << s[idx];
            }
            idx++;
        }

        cout << '\n';
    }
    return 0;
}