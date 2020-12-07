#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int h1, m1, s1, tc, total;
	cin >> h1 >> m1 >> s1 >> tc;
	
	total = h1 * 3600 + m1 * 60 + s1;
	
	for (int i = 0; i < tc; i++) {
		int T, c;
		cin >> T;
		
		if (T == 1) {
			cin >> c;
            c %= 86400;
            if (total + c >= 86400) {
                total = total + c - 86400;
			} else {
                total += c;
            }
		} else if (T == 2) {
			cin >> c;
            c %= 86400;
			if (total - c < 0) {
                total = total - c + 86400;
			} else {
                total -= c;
            }
		} else {
			int h2, m2, s2, tmp;
            tmp = total;
			h2 = tmp / 3600;
			tmp -= h2 * 3600;
			m2 = tmp / 60;
			tmp -= m2 * 60;
			s2 = tmp;
			cout << h2 << " " << m2 << " " << s2 << '\n';
		}
	}
	
	return 0;
}