#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double subject, m = 0, sum = 0, score[1000];

    cin >> subject;

    for(int i = 0; i < subject; i++) {
        cin >> score[i];

        if(m < score[i]) {
            m = score[i];
        }
    }

    for(int i = 0; i < subject; i++) {
        score[i] = score[i] / m * 100;
        sum += score[i];
    }

    cout.precision(2);
    cout << fixed << sum / subject;
    return 0;
}