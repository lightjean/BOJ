#include <iostream>
using namespace std;

int main()
{
    int idx = 0, check = 0, arr[26];
    string str;

    for(int i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    cin >> str;

    while(str[idx] != '\0') {
        if(arr[str[idx] - 97] == -1) {
            arr[str[idx] - 97] = check;
            check++;
        } else check++;
        idx++;
    }

    for(int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}