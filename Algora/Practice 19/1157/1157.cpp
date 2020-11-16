#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int idx = 0, max = 0, max_idx = 0, overlap = 0, arr[26] = {0};
    string str;

    cin >> str;

    while(str[idx] != '\0') {
        if(str[idx] >= 65 && str[idx] <= 90) {
            arr[str[idx] - 65]++;
        } else {
            arr[str[idx] - 97]++;
        }
        idx++;
    }

    for(int i = 0; i < 26; i++) {
        if(max < arr[i]) {
            max = arr[i];
            max_idx = i;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(overlap == 2) {
            cout << "?" << '\n';
            return 0;
        }
        if(max == arr[i]) {
            overlap++;
        }
    }

    cout << (char)(max_idx + 65);
    return 0;
}