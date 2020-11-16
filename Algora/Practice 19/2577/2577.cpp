#include <iostream>
using namespace std;

int main()
{
    int a, b, c, temp, count, index = 0, arr[9];

    for(int i = 0; i < 9; i++) { //0을 세지 않기 위해 -1로 초기화
        arr[i] = -1;
    }

    cin >> a >> b >> c;

    temp = a * b * c;

    while(temp >= 10) { //각 자리의 수를 배열에 저장
        arr[index] = temp % 10;
        temp = temp / 10;
        index++;
    }
    
    arr[index] = temp; // 남은 맨 앞 자리 수

    for(int i = 0; i < 10; i++) { // 0부터 9까지
        count = 0;
        index = 0;

        while(index != 9) { // 각 자리수를 세기
            if(arr[index] == i) {
                count++;
            }
            index++;
        }
        cout << count << '\n';
    }
    return 0;
}