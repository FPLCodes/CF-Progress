#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;

int main()
{
    int n; cin >> n;
    long long a, b, k;
    long long pos = 0;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> k;
        long long half = k/2;
        if (k % 2 == 0) {
            pos = (a - b) * half;
        }
        else {
            pos = (a - b) * half + a;
        }
        cout << pos << endl;
        pos = 0;
    }
}