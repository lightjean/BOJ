#include <iostream>
using namespace std;

int main() {
    int n, cnt_a = 0, cnt_b = 0, cnt_g = 0;
    char a[101], b[101], g[101]; // 답안지
    string str;

    cin >> n;
    cin >> str;
    
    int idx = 0;
    while (idx < n) {
        if (idx % 3 == 0) a[idx] = 'A';
        else if (idx % 3 == 1) a[idx] = 'B';
        else a[idx] = 'C';

        if (idx % 4 == 0) b[idx] = 'B';
        else if (idx % 4 == 1) b[idx] = 'A';
        else if (idx % 4 == 2) b[idx] = 'B';
        else b[idx] = 'C';
        
        if (idx % 6 == 0) g[idx] = 'C';
        else if (idx % 6 == 1) g[idx] = 'C';
        else if (idx % 6 == 2) g[idx] = 'A';
        else if (idx % 6 == 3) g[idx] = 'A';
        else if (idx % 6 == 4) g[idx] = 'B';
        else g[idx] = 'B';

        idx++;
    }

    for (int i = 0; i < n; i++) {
        if (str[i] == a[i]) cnt_a++;
        if (str[i] == b[i]) cnt_b++;
        if (str[i] == g[i]) cnt_g++;
    }

    int max = 0;
    if (cnt_a > max) max = cnt_a;
    if (cnt_b > max) max = cnt_b;
    if (cnt_g > max) max = cnt_g;
    cout << max << '\n';
    if (max == cnt_a) cout << "Adrian" << '\n';
    if (max == cnt_b) cout << "Bruno" << '\n';
    if (max == cnt_g) cout << "Goran" << '\n';

    return 0;
}