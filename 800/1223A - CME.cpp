#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q; cin >> q;

    int n[q];

    for (int i = 0; i < q; i++) {
        cin >> n[i];
        if (n[i] == 1 || n[i] == 2) cout << "2\n";
        else if (n[i] & 1) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}