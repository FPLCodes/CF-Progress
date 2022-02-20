#include<bits/stdc++.h>
using namespace std;

int main() {
	int s, n;
	cin >> s >> n;
	
	bool can = true;
	vector<pair<int,int>> d;
	for (int i = 0; i < n; i++) {
		pair<int,int> p;
		cin >> p.first >> p.second;
		d.push_back(p);
	}
	sort(d.begin(), d.end());
	
	for (int i = 0; i < n; i++) {
		if (s > d[i].first) s+= d[i].second;
		else {
			can = false;
			break;
		}
	}
	
	if (can) cout << "YES";
	else cout << "NO";
	
	return 0;
}