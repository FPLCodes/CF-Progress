#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		if (is_sorted(v.begin(), v.end())) {
			for (int c : v) cout << c << ' ';
			cout << endl;
		}
		else {
			int startPos, endPos, min;
			for (int i = 0; i < n; i++) {
				if (v[i] != i + 1) {
					startPos = i;
					min = v[i];
					for (int j = i+1; j < n; j++) {
						if (v[j] < min) {
							min = v[j];
							endPos = j;
						}
					}
					if (endPos) break;
				}
			}
			reverse(v.begin() + startPos, v.begin() + endPos + 1);
			for (int c : v) cout << c << ' ';
			cout << endl;
		}
	}
	return 0;
}