#include <iostream>
#include <stack>
using namespace std;

int priority(char op) {
    switch (op) {
        case '(':
        case ')':
            return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
    }
    return -1;
}

int main() {
    char expression[101];
    stack<char> s;

    cin >> expression;

    int i = 0;

    while (expression[i] != '\0') {
        switch (expression[i]) {
            case '+':
            case '-':
            case '*':
            case '/':
                while (!s.empty() && priority(expression[i]) <= priority(s.top())) {
                    cout << s.top();
                    s.pop();
                }
                s.push(expression[i]);
                break;
            case '(':
                s.push(expression[i]);
                break;
            case ')':
                while (s.top() != '(') {
                    cout << s.top();
                    s.pop();
                }
                s.pop();
                break;
            default:
                cout << expression[i];
        }
        i++;
    }

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}