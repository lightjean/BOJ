#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int length, num1, num2;
    char a[101];
    cin >> a;
    length = strlen(a);
    num1 = length / 10;
    num2 = length % 10;
    for(int i=0; i<num1; i++){
        for(int j=0; j<10; j++){
            cout << a[i*10+j];
        }
        cout << endl;
    }
    for(int i=0; i<num2; i++)
        cout << a[num1*10+i];
    return 0;
}