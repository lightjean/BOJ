#include <iostream>
#include <vector>
using namespace std;

int get_random_number(int x) {
    x -= x % 10;
    x -= x % 100;
    return x / 100;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (1) {
        int n, cnt = 1;
        bool flag = 0;
        vector<int> v;
        cin >> n;

        if (n == 0) break;
        
        int r_num = n;
        v.push_back(r_num);

        while (1) {
            r_num *= r_num;

            if (r_num >= 1000000) {
                r_num = r_num % 1000000;
            }

            r_num = get_random_number(r_num);

            for (int i = 0; i < v.size(); i++) {
                if (r_num == v[i]) {
                    flag = 1;
                    break;
                }
            }

            if (flag) {
                break;
            } else {
                v.push_back(r_num);
                cnt += 1;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}