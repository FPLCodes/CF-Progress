#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
 
int main()
{
    int n, t; cin >> n >> t;
    char c[n];
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n; j++) {
            if (c[j] == 'B' && c[j+1] == 'G') {
                swap(c[j], c[j+1]);
                j++;
            }
        }
    }
    for (char c: c) cout << c;
}