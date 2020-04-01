#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);;
    
    int c, n, score[1000], sum, count;

    cin >> c;

    while(c--) {
        sum = 0;
        count = 0;
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> score[i];
            sum += score[i];
        }
        
        for(int i = 0; i < n; i++) {
            if(score[i] > sum / n) {
                count++;
            }
        }

        cout.precision(3);
        cout << fixed << ((double)count / n) * 100 << "%" << '\n';
    }
}