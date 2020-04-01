#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, idx = 0, num[27];
    double ans;
    string str;
    stack<char> s;

    cin >> n;
    cin >> str;

    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    while(str[idx] != '\0') {
        if(str[idx] >= 65 && str[idx] <= 90) { // 알파벳일 때 숫자 넣기
            s1.push(num[str[idx] - 65]);
        } else { // 연산자가 들어올 때
            if(str[idx] == '*') {
                ans += s.top();
            }
            s.push(str[idx]);
        }
        idx++;
    }


} // 연산자 우선순위를 따져야 함 *이거나 /이면 바로 계산