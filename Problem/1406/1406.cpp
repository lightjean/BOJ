#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    char ans[100001];
    stack<char> s_left, s_right;

    cin >> ans;

    n = strlen(ans); // strlen 함수의 시간복잡도는 n이므로 for문에 넣지 않고 따로 변수에 저장

    for(int i = 0; i < n; i++) { // 처음 커서는 맨 뒤에 있으므로 문자열을 모두 s_left에 넣음
        s_left.push(ans[i]);
    }

    cin >> m;

    while(m--) {
        char cmd;
        cin >> cmd;

        if(cmd == 'L' && !s_left.empty()) { // 커서가 문장 맨 앞(s_left가 비었을 때)이면 무시
            s_right.push(s_left.top());
            s_left.pop();
        } else if(cmd == 'D' && !s_right.empty()) { // 커서가 문장 맨 뒤(s_right가 비었을 때)이면 무시
            s_left.push(s_right.top());
            s_right.pop();
        } else if(cmd == 'B' && !s_left.empty()) { // 커서가 문장 맨 앞(s_left가 비었을 때)이면 무시
            s_left.pop();
        } else if(cmd == 'P') {
            char ch;
            cin >> ch;
            s_left.push(ch);
        }
    }

    while(!s_left.empty()) { // 출력할 때는 커서를 왼쪽으로 옮긴 후 s_right 안의 모든 원소를 pop
        s_right.push(s_left.top());
        s_left.pop();
    }

    while(!s_right.empty()) {
        cout << s_right.top();
        s_right.pop();
    }

    cout << '\n';
    return 0;
}