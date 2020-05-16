#include <iostream>
using namespace std;

int main()
{
    int n, m, ans = 0, gap = 300000, card[100];

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> card[i];
    }

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                int sum = 0;
                sum += card[i];
                sum += card[j];
                sum += card[k];

                if(m - sum >= 0 && gap > m - sum) {
                    gap = m - sum;
                    ans = sum;
                }
            }
        }
    }

    cout << ans << '\n';

    return 0;
}