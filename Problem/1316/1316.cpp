#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, idx, cnt = 0;
    string str;

    cin >> n;

    cnt = n;

    for(int i = 0; i < n; i++) {
        bool arr[26] = {0};
        idx = 0;
        cin >> str;

        arr[str[idx] - 97] = 1; // 맨 처음 알파벳을 나온 것으로 간주

        while(str[idx + 1] != '\0') {
            if(str[idx] != str[idx + 1]) { // 현재와 다음 알파벳이 서로 다를 때
                if(arr[str[idx + 1] - 97]) { // 이미 나온 알파벳일 때
                    cnt--;
                    break;
                }
                else { // 처음 나온 알파벳일 때
                    arr[str[idx + 1] - 97] = 1;
                    idx++;
                }
            } else idx++; // 현재와 다음 알파벳이 서로 같을 때
        }
    }

    cout << cnt << '\n';
    return 0;
}