#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    stack<char> s;

    cin >> t;

    while(t--) {
        string str;
        bool check = false;

        cin >> str;
        
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '(') {
                s.push(str[i]);
            } else {
                if(!s.empty()) {
                    s.pop();
                } else {
                    cout << "NO" << '\n';
                    check = true;
                    break;
                }
            }
        }

        if(check == false) {
            if(s.empty()) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }

        while(!s.empty()) {
            s.pop();
        }
    }

    return 0;
}