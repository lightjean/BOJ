#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    char star[201];
    cin >> n;
    for(int i=0; i<2*n; i++)
        star[i] = ' ';
    for(int i=0; i<n-1; i++){
        star[i] = '*';
        star[2*n-1-i] = '*';
        for(int j=0; j<n*2; j++){
            cout << star[j];
        }
        cout << '\n';
    }
    for(int i=0; i<2*n; i++){
        cout << '*';
    }
    for(int i=n-1; i>0; i--){
        cout << '\n';
        star[i] = ' ';
        star[2*n-1-i] = ' ';
        for(int j=0; j<2*n; j++){
            cout << star[j];
        }
    }
    return 0;
}