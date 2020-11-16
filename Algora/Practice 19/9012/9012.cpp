#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    string str;

    cin >> t;

    while(t--) {
        bool check = true;
        stack<int> s;
        cin >> str;

        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '(') {
                s.push(i);
            } else if(str[i] == ')' && s.empty()) { // 스택이 비었는데 닫는 괄호가 나왔을 때
                check = false; // 스택이 비었지만 올바른 괄호 문자열이 아님을 표시
                break;
            } else {
                s.pop();
            }
        }

        if(s.empty() && check) { // 스택이 비었으며 올바른 괄호 문자열인 경우
            cout << "YES" << '\n';
        } else { //스택이 비지 않았거나 올바른 괄호 문자열이 아닌 경우
            cout << "NO" << '\n';
        }
    }

    return 0;
} // 참고: 스택으로 하지 않아도 여는 괄호, 닫는 괄호의 개수로 풀 수 있음. 스택 STL 연습용으로 품.