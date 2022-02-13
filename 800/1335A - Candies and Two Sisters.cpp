#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    long long candies;
    for (int i = 0; i < n; i++) {
        cin >> candies;
        if (candies == 1 || candies == 2) {
            cout << 0 << endl;
            continue;
        }
        double eq = (candies/(double)2);
        cout << (int)round(eq)-1 << endl;
    }
}