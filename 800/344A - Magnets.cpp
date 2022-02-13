#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    int magnets[n];
 
    for (int i = 0; i < n; i++) {
        cin >> magnets[i];
    }
    int groups = 0;
 
    for (int i = 0; i < n; i++) {
        if (magnets[i] == 10 && magnets[i + 1] == 01) {
            groups++;
        }
        else if (magnets[i] == 01 && magnets[i + 1] == 10) {
            groups++;
        }
    }
    cout << groups + 1;
    return 0;
}