#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    string str;

    cin >> str;

    if(str[0] == '0' && str[1] == 'x') {
        num = stoi(str, nullptr, 16);
        cout << dec << num;
    } else if(str[0] == '0') {
        num = stoi(str, nullptr, 8);
        cout << dec << num;
    } else {
        num = stoi(str, nullptr, 10);
        cout << dec << num;
    }
    
    return 0;
}