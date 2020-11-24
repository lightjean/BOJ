#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, h = 0, m = 0, pos_h = 0, pos_m = 0;
	bool check[181] = {0};
	
	for (int i = 0; i < 720; i++) {
		int angle;
		
		m += 1;
		pos_m += 6;
		
		if (m == 60) {
			m = 0;
			pos_m = 0;
		}
		
		if (m % 12 == 0) {
			h += 1;
			pos_h += 6;
		}
		
		angle = abs(pos_h - pos_m);
		if (angle > 180) {
			angle -= 180;
		}
		
		check[angle] = 1;
	}
	
	while (cin >> a) {
		if (check[a]) {
			cout << "Y" << '\n';
		} else {
			cout << "N" << '\n';
		}
	}
	
	return 0;
}