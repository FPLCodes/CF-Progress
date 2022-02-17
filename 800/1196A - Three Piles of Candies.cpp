#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    long long p1, p2, p3;
    long long sum, split;
 
    for (int i = 0; i < n; i++) {
        cin >> p1 >> p2 >> p3;
        sum = p1 + p2 + p3;
        split = floor(sum / 2);
        cout << split << endl;
    }
}