#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt = 1, idx = 0;
    string str;

    getline(cin, str);

    while(str[idx] != '\0') {
        if(str[idx] == ' ') {
            cnt++;
        }
        idx++;
    }

    if(str.front() == ' ') cnt--;
    if(str.back() == ' ') cnt--;

    cout << cnt << '\n';
    return 0;
}