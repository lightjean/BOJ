#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, idx = 0, a[1000000], f[1000001] = {0,}, ngf[1000000];
    stack<int> s;

    cin >> n;
    
    if(n != 1) { // 크기가 1이면 할 필요가 없음
        for(int i = 0; i < n; i++) { // 등장 횟수
            cin >> a[i];
            f[a[i]]++;
        }

        s.push(idx); // 처음 수 넣기
        idx++;
    }

    while(!(s.empty() && idx == n - 1)) { // 끝 자리를 제외한 모든 수가 ngf에 입력될 때 까지
        if(!s.empty()) { // 비어있을 때 top, pop을 할 수 없음
            if(f[a[s.top()]] < f[a[idx]]) { // 오등큰수를 찾았을 때
                while(f[a[s.top()]] < f[a[idx]]) { // 넣을 수 있는 오등큰수를 다 넣을 때 까지
                    ngf[s.top()] = a[idx];
                    s.pop();

                    if(s.empty()) { // 비어있을 때 pop을 할 수 없음
                        break;
                    }
                }
            } else if(idx == n - 1) { // 오등큰수를 다 찾지 못하고 끝에 도착했을 때
                while(!s.empty()) {
                    ngf[s.top()] = -1;
                    s.pop();
                }
            } else {
                s.push(idx);
                idx++;
            }
        } else {
            s.push(idx);
            idx++;
        }
    }

    ngf[idx] = -1; // n이 1이거나 마지막 수는 무조건 -1

    for(int i = 0; i < n; i++) {
        cout << ngf[i] << " ";
    }

    return 0;
}