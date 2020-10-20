#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main() {
    int n;
    double operand[26];
    char expression[101];
    stack<double> s;

    cin >> n >> expression;

    for (int i = 0; i < n; i++)
        cin >> operand[i];

    int i = 0;
    double a, b;

    while (expression[i] != '\0') {
        if (expression[i] >= 'A' && expression[i] <= 'Z') 
            s.push(operand[(int)expression[i] - (int)'A']);
        else if (expression[i] == '+') {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            s.push(a + b);
        } else if (expression[i] == '-') {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            s.push(a - b);
        } else if (expression[i] == '*') {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            s.push(a * b);
        } else {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            s.push(a / b);
        }
        i++;
    }

    printf("%.2lf\n", s.top());
    return 0;
}