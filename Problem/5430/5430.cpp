#include <iostream>
#include <deque>
#include <cstring>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        string func, arr;
        deque<int> dq;
        
        cin >> func >> n >> arr;

        // 문자열 처리 dog 힘듦
        char *tmp = new char[arr.size() - 1];
        copy(arr.begin() + 1, arr.end() - 1, tmp);
        tmp[arr.size() - 2] = '\0';

        char *tok = strtok(tmp, ",");

        while (tok != NULL) {
            dq.push_back(atoi(tok));
            tok = strtok(NULL, ",");
        }

        bool flag = 0, error = 0; // 0이면 앞, 1이면 뒤
        for (int i = 0; i < func.size(); i++) {
            if (func[i] == 'R') {
                flag = !flag;
            } else if (func[i] == 'D' && flag == 0) {
                if (dq.empty()) {
                    error = 1;
                    break;
                } else {
                    dq.pop_front();
                }
            } else if (func[i] == 'D' && flag == 1){
                if (dq.empty()) {
                    error = 1;
                    break;
                } else {
                    dq.pop_back();
                }
            }
        }

        if (error) {
            cout << "error" << '\n';
        } else if (flag) {
            cout << "[";
            if (!dq.empty()) {
                cout << dq.back();
                dq.pop_back();
            }
            while (!dq.empty()) {
                cout << "," << dq.back();
                dq.pop_back();
            }
            cout << "]" << '\n';
        } else {
            cout << "[";
            if (!dq.empty()) {
                cout << dq.front();
                dq.pop_front();
            }
            while (!dq.empty()) {
                cout << "," << dq.front();
                dq.pop_front();
            }
            cout << "]" << '\n';
        }

        delete[] tmp;
    }
    return 0;
}