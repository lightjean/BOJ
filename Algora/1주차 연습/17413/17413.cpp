#include <iostream>
#include <stack>
using namespace std;

void print(stack<char> &s) { // 참조에 의한 호출(&을 꼭 붙여야 함)
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool check = false;
    string str;
    stack<char> s;

    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '<') { // 태그 시작, 단어가 끝남
            print(s);
            cout << str[i];
            check = true;
        } else if(!check) { // 태그 영역이 아닐 때
            if(str[i] == ' ') { // 단어가 끝나는 경우
                print(s);
                cout << str[i];
            } else {
                s.push(str[i]);
            }
        } else { // 태그 영역일 때
            cout << str[i];
            if(str[i] == '>') {
                check = false;
            }
        }
    }

    print(s); // 문자열이 끝났을 때 스택에 남아있는 것 전부 출력

    return 0;
}