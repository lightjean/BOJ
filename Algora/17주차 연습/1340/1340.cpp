#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int present = 0, total_m, month_list[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char month_name[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}, temp_year[5], month[10], temp_day[3], temp_h[3], temp_m[3];
    string str;

    cin >> month >> 
    str.copy(temp_day, 2, 0);
    str.copy(temp_year, 4, 4);
    str.copy(temp_h, 2, 9);
    str.copy(temp_m, 2, 12);

    int day = stoi(temp_day);
    int year = stoi(temp_year);
    int h = stoi(temp_h);
    int m = stoi(temp_m);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        total_m = 527040;
        month_list[1] = 29;
    } else total_m = 525600;

    for(int i = 1; i <= 12; i++) {
        if(month == month_name[i]) {
            break;
        }
        present += (month_list[i] * 1440);
    }

    //present += (day - 1) * 1440 + (h * 60) + m;
    cout << month << '\n' << day << '\n' << year << '\n' << h << '\n' << m << '\n';
    //cout << (present / total_m) * 100;
    return 0;
}