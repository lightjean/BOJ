#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, course;
    string name, began_date, birth_date, began_year, birth_year;

    cin >> n;

    for(int i = 0; i < n; i++) {
        bool check = false, coach = false;

        cin >> name >> began_date >> birth_date >> course;

        began_year = began_date.substr(0, 4);
        birth_year = birth_date.substr(0, 4);

        if(atoi(began_year.c_str()) >= 2010) {
            check = true;
        } else if(atoi(birth_year.c_str()) >= 1991) {
            check = true;
        } else if(course <= 40) {
            coach = true;
        }

        cout << name << " ";

        if(check == true) {
            cout << "eligible" << '\n';
        } else if(check == false && coach == true) {
            cout << "coach petitions" << '\n';
        } else {
            cout << "ineligible" << '\n';
        }
    }

    return 0;
}