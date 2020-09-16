#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	bool arr[11];

    for(int i = 1; i <= 10; i++) {
        arr[i] = true;
    }

    while(1) {
        int num;
        cin >> num;
        if(num == 0) {
            break;
        }

        string str;
        cin.ignore(); // getline으로 여러 번 입력 받을 때 필요
        getline(cin, str); // 공백이 포함된 줄 입력을 받을 때

        if(str == "too high") {
            for(int i = num; i <= 10; i++) {
                arr[i] = false;
            }
        } else if(str == "too low") {
            for(int i = num; i >= 1; i--) {
                arr[i] = false;
            }
        } else if(str == "right on") {
            if(arr[num]) {
                cout << "Stan may be honest" << '\n';
            } else {
                cout << "Stan is dishonest" << '\n';
            }

            for(int i = 1; i <= 10; i++) {
                arr[i] = true;
            }
        }
    }
	return 0;
}