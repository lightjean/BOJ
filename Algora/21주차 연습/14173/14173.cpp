#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main()
{
    int max_x = 0, max_y = 0, min_x = 10, min_y = 10;
    Point p[4];

    for(int i = 0; i < 4; i++) {
        cin >> p[i].x >> p[i].y;
        if(max_x < p[i].x) {
            max_x = p[i].x;
        }

        if(min_x > p[i].x) {
            min_x = p[i].x;
        }

        if(max_y < p[i].y) {
            max_y = p[i].y;
        }

        if(min_y > p[i].y) {
            min_y = p[i].y;
        }
    }

    if(max_x - min_x > max_y - min_y) {
        cout << (max_x - min_x) * (max_x - min_x) << '\n';
    } else {
        cout << (max_y - min_y) * (max_y - min_y) << '\n';
    }

    return 0;
}