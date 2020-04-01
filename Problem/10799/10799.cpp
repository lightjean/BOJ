#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt = 0;
    string str;
    stack<char> s;

    cin >> str;

    s.push(str[0]);

    for(int i = 1; i < str.length(); i++) {
        if(str[i] == ')') {
            if(str[i - 1] == '(') { // 레이저일 때
                s.pop();
                cnt += s.size();
            } else { // 쇠막대기의 끝일 때
                cnt++;
                s.pop();
            }
        } else { // 여는 괄호는 스택에 넣음
            s.push(i);
        }
    }

    cout << cnt << '\n';
    return 0;
}