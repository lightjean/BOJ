#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, j, m, r, result[2] = {0, 10000};

    cin >> n;

    for(int i = 0; i < n; i++) {
        int turn = 0, num = 0;
        cin >> j >> m;
        r = (j - 1) % (1 + m);

        while(num != r) { // 필승 숫자 초항까지 말하기
            num++;
        }

        turn++;
        r += (m + 1);

        while(1) {
            while(num != r - 1) { // 규용
                num++;

                if(num == j) { // 끝 번호 말할 때 까지
                    break;
                }
            }

            turn++;

            if(num == j) { // 끝 번호 말할 때 까지
                break;
            }

            r += (m + 1);

            while(num != r - 2) { // 유진
                num++;
                if(num == j - 1) { // 마지막 숫자 전까지만 말해야 함
                    break;
                }
            }

            turn++;
        }

        if(turn < result[1]) {
            result[0] = i + 1;
            result[1] = turn;
        }
    }

    cout << result[0]  << " " << result[1] << '\n';
    return 0;
}