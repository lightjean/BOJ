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
        star[i] = ' ';
    for(int i=0; i<(2*n-1)/2; i++){
        star[n-1-i] = '*';
        for(int j=0; j<n; j++){
            cout << star[j];
        }
        cout << '\n';
    }
    for(int i=0; i<n; i++){
        cout << '*';
    }
    for(int i=0; i<(2*n-1)/2; i++){
        cout << '\n';
        star[i] = ' ';
        for(int j=0; j<n; j++){
            cout << star[j];
        }
    }
    return 0;
}