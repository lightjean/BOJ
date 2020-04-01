#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;
    
    cout.precision(9);

    cout << fixed << a / b;
    return 0;
} //float는 6자리, double은 12자리까지 정확도를 보장