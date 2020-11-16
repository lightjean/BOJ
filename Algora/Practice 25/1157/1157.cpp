#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int idx = 0, max = 0, max_idx, overlap = 0, arr[26] = {0}; // arr 배열은 알파벳이 등장한 수를 a, b, c... 순서로 저장
    string str;

    cin >> str;

    while(str[idx] != '\0') { // 문자열 끝까지 반복
        if(str[idx] >= 65 && str[idx] <= 90) { // 대문자인 경우
            arr[str[idx] - 65]++;
        } else { // 소문자인 경우
            arr[str[idx] - 97]++;
        }
        idx++;
    }

    for(int i = 0; i < 26; i++) { // 가장 많이 등장한 알파벳을 찾음
        if(max < arr[i]) {
            max = arr[i];
            max_idx = i;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(overlap == 2) { // 2가 되면 등장 횟수가 같은 알파벳이 최소 2개 있는 것과 같음
            cout << "?" << '\n';
            return 0;
        }
        if(max == arr[i]) { // 등장 횟수가 같은 알파벳이 있을 때
            overlap++;
        }
    }

    cout << (char)(max_idx + 65);
    return 0;
}