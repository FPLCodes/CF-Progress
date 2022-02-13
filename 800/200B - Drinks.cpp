#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    double fraction = 0;
    double volume;
 
    for (int i = 0; i < n; i++) {
        cin >> fraction;;
        volume += fraction;
    }
    fraction = (volume / n);
    cout << fraction;
    return 0;
}