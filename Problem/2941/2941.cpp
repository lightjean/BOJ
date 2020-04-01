#include <iostream>
using namespace std;

int main()
{
    int idx = 0, cnt = 0;
    string str;

    cin >> str;

    while(str[idx] != '\0') {
        if(str[idx] == 'c' && (str[idx + 1] == '=' || str[idx + 1] == '-')) {
            idx += 2;
            cnt++;
        } else if(str[idx] == 'd' && str[idx + 1] == 'z' && str[idx + 2] == '=') {
            idx += 3;
            cnt++;
        } else if(str[idx] == 'd' && str[idx + 1] == '-') {
            idx += 2;
            cnt++;
        } else if((str[idx] == 'l' || str[idx] == 'n') && str[idx + 1] == 'j') {
            idx += 2;
            cnt++;
        } else if((str[idx] == 's' || str[idx] == 'z') && str[idx + 1] == '=') {
            idx += 2;
            cnt++;
        } else {
            idx++;
            cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}