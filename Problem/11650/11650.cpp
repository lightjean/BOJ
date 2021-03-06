#include <iostream>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
};

bool cmp(const Point &a, Point &b) {
    if (a.x < b.x) {
        return true;
    }
    else if (a.x == b.x) {
        return a.y < b.y;
    }
    else {
        return false;
    } 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    Point p[n];

    for (int i = 0; i < n; i++)
        cin >> p[i].x >> p[i].y;

    sort(p, p + n, cmp);

    for (int i = 0; i < n; i++) 
        cout << p[i].x << " " << p[i].y << '\n';

    return 0;
}