#include <iostream>
using namespace std;

int main()
{
    int n, k, rank = 1, arr[1000][4], temp[1][4];

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];

            if(arr[i][0] == k) { // 찾고자 하는 나라는 비교를 위해 따로 빼둠
                temp[0][j] = arr[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++) { // 메달 수가 같으면 rank를 올리면 안됨
        bool check = false;

        if(arr[i][0] == temp[0][0]) { // 찾는 나라가 나오면 패스
            continue;
        }

        if(arr[i][1] > temp[0][1]) { // 금메달이 많은 경우
            rank++;
            check = true;
        } else if(arr[i][1] < temp[0][1]) { // 금메달이 적은 경우 패스
            check = true;
        }

        if(arr[i][2] > temp[0][2] && !check) { // 금메달은 같고 은메달이 많은 경우
            rank++;
            check = true;
        } else if(arr[i][2] < temp[0][2] && !check) {
            check = true;
        }

        if(arr[i][3] > temp[0][3] && !check) { // 금메달, 은메달은 같고 동메달이 많은 경우
            rank++;
        }
    }

    cout << rank << '\n';
    return 0;
}