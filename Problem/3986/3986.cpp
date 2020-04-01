#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 0;
    string str;
    stack<char> s;

    cin >> n;

    while(n--) {
        bool good = true;
        cin >> str;

        for(int i = 0; i < str.length(); i++) {
            if(str[i] == 'A') {
                if(!s.empty() && s.top() == 'A') {
                    s.pop();
                } else {
                    s.push(str[i]);
                }
            } else if(str[i] == 'B') {
                if(!s.empty() && s.top() == 'B') {
                    s.pop();
                } else {
                    s.push(str[i]);
                }
            }
        }

        if(!s.empty()) { // 스택이 비어있지 않으면 좋은 단어 아님
            good = false;

            while(!s.empty()) {
                s.pop();
            }
        }

        if(good) {
            cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}