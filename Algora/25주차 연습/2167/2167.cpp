#include <iostream>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k, x1, x2, y1, y2, arr[300][300];

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> k;

    for(int i = 0; i < k; i++) {
        int sum = 0;

        cin >> x1 >> y1 >> x2 >> y2;

        for(int j = x1 - 1; j < x2; j++) {
            for(int l = y1 - 1; l < y2; l++) {
                sum += arr[j][l];
            }
        }

        cout << sum << '\n';
    }

    return 0;
}