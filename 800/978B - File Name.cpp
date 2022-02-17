#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int pos = s.find("xxx");
        if (pos < 0) {
            break;
        }
        else {
            s.erase(s.begin()+pos);
            cnt++;
        }
    }
    cout << cnt;
}