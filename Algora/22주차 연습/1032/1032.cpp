#include <iostream>
using namespace std;

int main()
{
    int n;
    bool check[50] = {false};
    string str1, str2;

    cin >> n;
    cin >> str1; // 비교 대상의 기준
    n--;

    while(n--) {
        cin >> str2; // 비교할 대상

        for(int i = 0; i < str1.length(); i++) {
            if(str1[i] != str2[i]) {
                check[i] = true;
            }
        }
    }

    for(int i = 0; i < str1.length(); i++) {
        if(!check[i]) {
            cout << str1[i];
        } else {
            cout << "?";
        }
    }

    return 0;
}