#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int r, b; cin >> r >> b;
    int diff = 0, same = 0;
    while (r >= 1 && b >= 1) {
        diff++;
        r--;
        b--;
    }
    while (r >= 2) {
        same++;
        r -= 2;
    }
    while (b >= 02) {
        same++;
        b -= 2;
    }
    cout << diff << " " << same;
    return 0;
}