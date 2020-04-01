#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string str;
    stack<char> s;
    
    cin >> t;
    cin.ignore(); // 한 줄씩 입력받을 때 버퍼에 남아있는 문자를 없애기 위해

    while(t--) {
        int n;

        getline(cin, str);
        str += '\n'; // getline 함수는 개행 문자 전까지만 입력을 받으므로 따로 뒤에 넣어주어 조건 처리하기 편하도록 함
        n = str.length();

        for(int i = 0; i < n; i++) { 
            if(str[i] == ' ' || str[i] == '\n') {
                while(!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
                cout << str[i];
            } else {
                s.push(str[i]);
            }
        }
    }

    return 0;
}