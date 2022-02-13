#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x[4];
    int highest = 0;
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }
    sort(x, x+4);
    int a = x[3] - x[0];
    int b = x[3] - x[2];
    int c = x[3] - x[1];
    cout << c << " " << b << " "<< a;
    return 0;
}