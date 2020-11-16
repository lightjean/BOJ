#include <iostream>
#include <string>
using namespace std;

struct Student {
    char name[16];
    int d, m, y, birth;
};

int main()
{
    int n, young, old, young_s, old_s;
    string str_y, str_m, str_d;
    Student s[100];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].d >> s[i].m >> s[i].y;

        str_y = to_string(s[i].y);
        str_m = to_string(s[i].m);

        if(str_m.length() == 1) {
            str_m.insert(0, "0");
        }

        str_d = to_string(s[i].d);

        if(str_d.length() == 1) {
            str_d.insert(0, "0");
        }

        str_y.append(str_m);
        str_y.append(str_d);

        s[i].birth = stoi(str_y);
    }

    young = s[0].birth;
    young_s = 1;
    old = s[0].birth;
    old_s = 1;

    for(int i = 1; i < n; i++) {
        if(young < s[i].birth) {
            young = s[i].birth;
            young_s = i;
        }
        if(old > s[i].birth) {
            old = s[i].birth;
            old_s = i;
        }
    }
    cout << s[young_s].name << '\n' << s[old_s].name << '\n';
    return 0;
} // 8자리 생년월일을 크기 순으로 비교, 가장 작은 것이 나이가 가장 많음.