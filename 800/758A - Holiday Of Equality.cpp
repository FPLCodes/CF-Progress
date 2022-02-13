#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    int a[n];
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int highest = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i] > highest) highest = a[i];
    }
    int b = 0;
    bool eq = false;
 
    sort (a, a + n);
 
    while (!eq) {
        for (int i = 0; i < n; i++) {
            while (a[i] < highest) {
                a[i]++;
                b++;
            }
        }
        eq = true;
    }
    cout << b;
    return 0;
}