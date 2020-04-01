#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, k, temp = 0, num = 2;
    stack<int> s;

    cin >> n >> k;

    s.push(1); // 한 자리 이진수는 그냥 넣기
    s.push(0); // 한 자리 이진수는 그냥 넣기

    for(int i = 0; i < 5; i++) { // 숫자 5개 출력
        for(int j = 0; j < n; j++) {
            if(s.empty()) {
                temp = num;

                while(temp != 1) {
                    s.push(temp % 2);
                    temp = temp / 2;
                }

                s.push(temp);
                num++;
            }

            if(j == k - 1) { // 진수 차례
                cout << s.top() << " ";
                s.pop();
            } else { // 진수 차례가 아닐 때
                s.pop();
            }
        }
    }

    return 0;
}