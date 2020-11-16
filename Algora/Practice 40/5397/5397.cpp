#include <iostream>
#include <stack>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    string log;
    deque<char> s_left;
    stack<char> s_right;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> log;

        for(int j = 0; j < log.length(); j++) {
            if(log[j] == '<') {
                if(!s_left.empty()) {
                    char temp = s_left.back();
                    s_left.pop_back();
                    s_right.push(temp);
                }
            } else if(log[j] == '>') {
                if(!s_right.empty()) {
                    char temp = s_right.top();
                    s_right.pop();
                    s_left.push_back(temp);
                }
            } else if(log[j] == '-') {
                if(!s_left.empty()) {
                    s_left.pop_back();
                }
            } else {
                s_left.push_back(log[j]);
            }
        }

        while(!s_left.empty()) {
            cout << s_left.front();
            s_left.pop_front();
        }

        while(!s_right.empty()) {
            cout << s_right.top();
            s_right.pop();
        }

        cout << '\n';
    }

    return 0;
}