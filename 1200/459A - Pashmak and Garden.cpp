#include<bits/stdc++.h>
using namespace std;

int main() {
	int x1, x2, y1, y2;
	
	cin >> x1 >> y1 >> x2 >> y2;
	int len;
	if (x1 == x2) {
		len = abs(y2 - y1);
		cout << x1 + len << ' ' << y1 << ' ';
		cout << x2 + len << ' ' << y2 << ' ';
	}
	else if (y1 == y2) {
		len = abs(x2 - x1);
		cout << x1 << ' ' << y1 + len << ' ';
		cout << x2 << ' ' << y2 + len << ' ';
	}
	else {
		if (abs(y2 - y1) == abs(x2 - x1)) {
			len = abs(x2 - x1);
			if (y2 > y1) {
				cout << x1 << ' ' << y1 + len << ' ';
				cout << x2 << ' ' << y2 - len << ' ';
			} else {
				cout << x1 << ' ' << y1 - len << ' ';
				cout << x2 << ' ' << y2 + len << ' ';
			}
		} else cout << -1;
	}
	return 0;
}