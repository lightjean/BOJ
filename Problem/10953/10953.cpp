#include <iostream>
using namespace std;

int main()
{
    int num, a, b;
    char c;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> a >> c >> b;
        cout << a+b << endl;
    }
    return 0;
}