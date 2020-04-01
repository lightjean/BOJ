#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    char result[80];

    cin >> n;

    while(n--) {
        int score = 0, count = 0;

        cin >> result;

        for(int i = 0; i < 80; i++) {

            if(result[i] == '\0') {
                break;
            }

            if(result[i] == 'O') {
                count++;
                score += count;
            } else {
                count = 0;
            }
        }

        cout << score << '\n';
    }
    return 0;
}