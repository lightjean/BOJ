#include <iostream>
#include <string>
using namespace std;

int main()
{
    int d, m, y, s;
    string str;

    while(cin >> d >> m >> y) {
        if(d == 0 && m == 0 && y == 0)
            break;

        cin.ignore();
        getline(cin, str);

        s = (d + m + y) % 25 + 1;

        for(int i = 0; i < str.length(); i++) {
            if(str[i] >= 97 && str[i] <= 122) {
                if(str[i] - s < 97) {
                    str[i] = 123 + ((str[i] - s) - 97);
                } else {
                    str[i] -= s;
                }
            }
        }
        cout << str << '\n';
    }
    return 0;
}