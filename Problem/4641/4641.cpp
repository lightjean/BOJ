#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int arr[15];
    bool check = false;
    while (1) { // 케이스마다 반복
        memset(arr, 0, sizeof(arr));
        int i = 0, j = 0, len = 0, cnt = 0, temp1, temp2;
        while (1) { // 한 줄씩 입력
            cin >> temp1;
            if (temp1 == 0) {
                break;
            }
            if (temp1 == -1) {
                check = true;
                break;
            }
            arr[i] = temp1;
            len++;
            i++;
        }
        if (check) break; // 입력 끝
        i = 0;
        while (i < len) {
            j = 0;
            while (j < len) {
                temp2 = arr[i] * 2;
                if (arr[j] == temp2) cnt++;
                j++;
            }
            i++;
        }
        cout << cnt << '\n';
    }
    return 0;
}