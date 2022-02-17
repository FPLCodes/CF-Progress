#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string bus[n];

    for (int i = 0; i < n; i++) {
        cin >> bus[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            if (bus[i][j] == 'O' && bus[i][j + 1] == 'O') {
                cout << "YES\n";
                bus[i][j] = '+';
                bus[i][j + 1] = '+';
                for (int i = 0; i < n; i++) {
                    cout << bus[i] << endl;
                }
                return 0;
            }
        }
    }
    cout << "NO\n";
}