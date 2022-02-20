#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int even = 0, odd = 0;
	int evenPos, oddPos;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		
		if (x % 2 == 0) {
			even++;
			evenPos = i;
		}
		else {
			odd++;
			oddPos = i;
		}
	}
	if (even > odd) cout << oddPos + 1;
	else cout << evenPos + 1;
	
	return 0;
}