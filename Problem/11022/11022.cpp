#include <iostream>
using namespace std;

int main()
{
    int num, a, b;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a+b << endl;
    }
    return 0;
}