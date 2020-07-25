#include <iostream>
using namespace std;

int main()
{
    string str;

    while(1) {
        int check1 = 0, check2 = 0, check3 = 0, check4 = 0; //1은 모음 수, 2는 자음 수, 3은 연속된 모음 수, 4는 연속된 자음 수
        bool check5 = false; //같은 글자가 연속되었는지 체크
        cin >> str;

        if(str == "end") {
            return 0;
        }

        for(int i = 0; i < str.length(); i++) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                check1++;
            } else {
                check2++;
            }
        }

        if(check1 == 0) {
            cout << "<" << str << ">" << " is not acceptable." << '\n';
            continue;
        }

        for(int i = 0; i < str.length() - 1; i++) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                if(str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u') {
                    check3++;
                } else {
                    check3 = 0;
                }
                if(check3 == 2) {
                    cout << "<" << str << ">" << " is not acceptable." << '\n';
                    break;
                }
            } else {
                if(!(str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u')) {
                    check4++;
                } else {
                    check4 = 0;
                }
                if(check4 == 2) {
                    cout << "<" << str << ">" << " is not acceptable." << '\n';
                    break;
                }
            }
        }

        if(check3 == 2 || check4 == 2) {
            continue;
        }

        for(int i = 0; i < str.length() - 1; i++) {
            if(str[i] == str[i + 1]) {
                if(!(str[i] == 'e' || str[i] == 'o')) {
                    check5 = true;
                    break;
                }
            }
        }

        if(check5) {
            cout << "<" << str << ">" << " is not acceptable." << '\n';
        } else {
            cout << "<" << str << ">" << " is acceptable." << '\n';
        }
    }

    return 0;
}
