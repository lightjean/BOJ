#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    stack<int> s;
    cin >> n;

    if (n < 0) { // 음수는 맨 앞 부호 비트로 1
        cout << 32 << '\n';
        return 0;
    }
    
    while (n != 1) {
        if (n == 0) break;
        int temp;
        temp = n % 2;
        n /= 2;
        s.push(temp);
    }
    s.push(n);
    
    cout << s.size() << '\n';
    return 0;
}