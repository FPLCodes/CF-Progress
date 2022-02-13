#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    int a, b;
 
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a == b) {
            cout << 0 << endl;
        }
        else if (a > b && ((a - b) % 2) == 0 || a < b && ((b-a) % 2) != 0) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }
}