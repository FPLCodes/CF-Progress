#include <iostream>
using namespace std;
 
int main()
{
    int n; cin >> n;
    char city[n];
 
    for (int i = 0; i < n; i++) {
        cin >> city[i];
    }
    int s = 0, f = 0;
 
    for (int i = 0; i < n; i++) {
        if (city[i] == 'S' && city[i + 1] == 'F') s++;
        else if (city[i] == 'F' && city[i + 1] == 'S') f++;
    }
    if (s > f) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}