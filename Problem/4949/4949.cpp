#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    stack<char> s;

    while(1) {
        bool balance = true;
        getline(cin, str);

        if(str[0] == '.') {
            break;
        }

        for(int i = 0; i < str.length() - 1; i++) {
            if(str[i] == '(' || str[i] == '[') {
                s.push(str[i]);
            } else if(str[i] == ')') {
                if(!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    balance = false;
                    break;
                }
            } else if(str[i] == ']') {
                if(!s.empty() && s.top() == '[') {
                    s.pop();
                } else {
                    balance = false;
                    break;
                }
            }
        }

        if(!s.empty()) {
            balance = false;
            while(!s.empty()) {
                s.pop();
            }
        }

        if(balance) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }

    return 0;
}