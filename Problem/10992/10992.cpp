#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    char star[101][201];
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<2*n-1; j++)
            star[i][j] = ' ';
    for(int i=0; i<n-1; i++){
        star[i][n-1-i] = '*';
        star[i][n-1+i] = '*';
        for(int j=0; j<n+i; j++){
            cout << star[i][j];
        }
        cout << '\n';
    }
    for(int i=0; i<2*n-1; i++)
        cout << '*';
    return 0;
}