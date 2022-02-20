#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		vector<int> v(n);
		for (auto &x: v) {
			cin >> x;
		}
		
		vector<int> even;
		vector<int> odd;
		for (int i = 0; i < n; i++) {
			if (v[i] % 2 == 0) even.push_back(v[i]);
			else odd.push_back(v[i]);
		}
		
		if (is_sorted(even.begin(), even.end()) && is_sorted(odd.begin(), odd.end())) 
		{
			cout << "Yes" << endl;
		} else cout << "No" << endl;
	}
	return 0;
}