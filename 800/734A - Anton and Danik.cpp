#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int len = s.size();
 
    int a = 0, d = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') a++;
        else d++;
    }
    if (a > d) cout << "Anton\n";
    else if (a == d) cout << "Friendship\n";
    else cout << "Danik\n";
    return 0;
}