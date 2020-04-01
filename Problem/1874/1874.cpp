#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, num, temp = 1;
    bool check = false;
    string ans; // 답을 바로바로 출력하지 말고 답을 저장할 변수에 미리 저장 후 순서대로 출력!
    stack<int> s;

    cin >> n;

    while(n--) {
        cin >> num;

        if(num >= temp) { // 만들 수열의 수가 스택에 넣을 수보다 크거나 같을 때
            while(num >= temp) { // 스택에 넣을 수가 더 클 때까지
                s.push(temp++); // 스택에 push
                ans += '+';
            }
            s.pop(); // push가 끝나면 pop
            ans += '-';
        } else if(num == s.top()) { // 만들 수열의 수보다 스택에 넣을 수가 큰 경우
            s.pop(); // 현재 스택의 top이랑 일치하여 pop이 가능한 경우
            ans += '-';
        } else { // 위의 조건들을 만족하지 않으면 수열을 만들 수 없음
            check = true;
        }
    }

    if(check) {
        cout << "NO" << '\n';
        return 0;
    }

    for(auto ch : ans) { // 반복자를 사용하여 문자열 출력을 쉽게 할 수 있음
        cout << ch << '\n';
    }

    return 0;
}