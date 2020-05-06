#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, m, n, grid[100][100];

    cin >> t;

    while(t--) {
        int sum = 0;

        cin >> m >> n;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    for(int k = i + 1; k < m; k++) {
                        if(grid[k][j] == 0) {
                            sum++;
                        }
                    }
                }
            }
        }

        cout << sum << '\n';
    }

    return 0;
}