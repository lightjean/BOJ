#include <iostream>
using namespace std;

int main()
{
    int m, d, sum_day, check;
    cin >> m >> d;
    sum_day = (m-1)*31+d;

    if(m==3||m==4)
        sum_day -= 3;
    else if(m==5||m==6)
        sum_day -= 4;
    else if(m==7||m==8||m==9)
        sum_day -= 5;
    else if(m==10||m==11)
        sum_day -= 6;
    else if(m==12)
        sum_day -= 7;

    check = sum_day % 7;

    switch(check){
        case 0:
            cout << "SUN";
            break;
        case 1:
            cout << "MON";
            break;
        case 2:
            cout << "TUE";
            break;
        case 3:
            cout << "WED";
            break;
        case 4:
            cout << "THU";
            break;
        case 5:
            cout << "FRI";
            break;
        case 6:
            cout << "SAT";
    }
    return 0;
}