#include <iostream>
using namespace std;

int main()
{
    int a[10], b[10], score_a = 0, score_b = 0;
    char recent_winner = 'X';

    for(int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < 10; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < 10; i++) {
        if(a[i] > b[i]) {
            score_a += 3;
            recent_winner = 'A';
        } else if(a[i] < b[i]) {
            score_b += 3;
            recent_winner = 'B';
        } else {
            score_a++;
            score_b++;
        }
    }

    cout << score_a << " " << score_b << '\n';

    if(score_a > score_b) {
        cout << "A" << '\n';
    } else if(score_a < score_b) {
        cout << "B" << '\n';
    } else {
        if(recent_winner == 'A') {
            cout << "A" << '\n';
        } else if(recent_winner == 'B') {
            cout << "B" << '\n';
        } else {
            cout << "D" << '\n';
        }
    }

    return 0;
}