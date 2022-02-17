#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    string s[n];
    string t[m];

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }
    int q; cin >> q;
    int years[q];

    for (int i = 0; i < q; i++) {
        cin >> years[i];
        years[i]--;
        cout << s[years[i] % n] + t[years[i] % m] << endl;
    }
    return 0;
}