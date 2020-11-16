#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int r, s;
    char photo[10][10];
    cin >> r >> s;
    for(int i=0; i<r; i++){
        for(int j=0; j<s; j++){
            cin >> photo[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<s; j++){
            cout << photo[i][j];
        }
        cout << '\n';
    }
    return 0;
}