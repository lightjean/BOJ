#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int a, b, temp, count = 1;
    cin >> n;
    a = 0;
    b = 1;
    while(1){
        if(n==0){
            b = 0;
            break;
        }
        else if(n==1)
            break;
        temp = a;
        a = b;
        b = temp + a;
        count++;
        if(n==count)
            break;
    }
    cout << b;
    return 0;
}