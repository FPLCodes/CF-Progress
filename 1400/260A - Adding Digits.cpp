#include<bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, n;
	cin >> a >> b >> n;
	
	int x = 0;
	a *= 10;
	if (a % b == 0) x++;
	else for (int i = 0; i < 9; i++) {
		a += 1;
		if (a % b == 0) {
			x++;
			break;
		}
	}
	
	if (x) {
		cout << a;
		for (int i = 0; i < n - 1; i++) {
			cout << 0;
		}
	}
	else cout << -1;
	return 0;
}