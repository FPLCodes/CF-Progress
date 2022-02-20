#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	std::vector<int> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
		
	int s = 0, taxi = 0;
	for (int i = n-1; i >= 0; i--) {
		if (v[i] == 4) taxi++;
		else {
			s = v[i];
			for (int j = i-1; j >= 0; j--) {
				if (s + v[j] == 4) {
					taxi++;
					v[j] = 0;
					s = 0;
					break;
				}
				else if (s + v[j] < 4) {
					s += v[j];
					v[j] = 0;
				}
			}
			if (s) taxi++;
			s = 0;
		}
	}
	if (n == 1 && s) taxi++;
	cout << taxi;
	return 0;
}