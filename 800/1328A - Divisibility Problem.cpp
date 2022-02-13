#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    int a, b, moves = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a % b == 0) {
            moves = 0;
            cout << moves << endl;
        }
        else {
            moves = (b - (a % b));
            cout << moves << endl;
        }
    }
}