#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, c[2222], sum = 0, max = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> c[i];
        if(c[i] > max) {
            max = c[i];
        }
    }

    for(int i = 0; i < n - 1; i++) {
        int temp = 0;
        for(int j = 0; j < n; j++) {
            if(max != c[j] && c[j] > temp) {
                temp = c[j];
                c[j] = 0;
                sum += temp;
            }
        }
    }

    cout << sum << '\n';
    return 0;
}