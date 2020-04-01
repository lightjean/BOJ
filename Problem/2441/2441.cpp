#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    char star[101];
    cin >> n;
    for(int i=0; i<n; i++)
        star[i] = '*';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << star[j];
        }
        star[i] = ' ';
        cout << '\n';
    }
    return 0;
}