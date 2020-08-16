#include <iostream>
using namespace std;

int main() {
    int n, ans = 1, max = 0, student[1000], table[1000][5];
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> table[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        int temp = 0;

        for(int j = 0; j < n; j++) {
            for(int k = 0; k < 5; k++) {
                if(i != j) {
                    if(table[i][k] == table[j][k]) {
                        temp += 1;
                        break;
                    }
                }
            }
        }

        student[i] = temp;
    }

    for(int i = 0; i < n; i++) {
        if(max < student[i]) {
            max = student[i];
            ans = i + 1;
        }
    }

    cout << ans << '\n';
    return 0;
}