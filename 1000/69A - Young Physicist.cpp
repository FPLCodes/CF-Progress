#include<bits/stdc++.h>
typedef long long LL;
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n][n];
    LL sum = 0;
    int x = 0, y = 0, z = 0, a, b, c;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if (x == 0 && y == 0 && z == 0) cout << "YES\n";
    else cout << "NO\n";
}