#include <iostream>
using namespace std;

int main()
{
    int n;
    char star[200];
    cin >> n;
    for(int i=0; i<2*n-1; i++){
        star[i] = '*';
    }
    for(int i=0; i<(2*n-1)/2; i++){
        for(int j=0; j<2*n-1-i; j++){
            cout << star[j];
        }
        star[i] = ' ';
        star[2*n-2-i] = ' ';
        cout << '\n';
    }
    for(int i=0; i<n; i++){
        cout << star[i];
    }
    for(int i=(2*n-1)/2; i>0; i--){
        cout << '\n';
        star[i-1] = '*';
        star[2*n-1-i] = '*';
        for(int j=0; j<2*n-i; j++){
            cout << star[j];
        }
    }
    return 0;
}