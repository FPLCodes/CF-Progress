#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char letter[n];

    int zero = 0, one = 0;

    for (int i = 0; i < n; i++) {
        cin >> letter[i];
        if (letter[i] == 'z') {
            zero++;
        }
        else if (letter[i] == 'n') {
            one++;
        }
    }
    int num = zero + one;
    for (int i = 0; i < num; i++) {
        if (one > 0) {
            cout << 1 << " ";
            one--;
        }
        else {
            cout << 0 << " ";
            zero--;
        }
    }
    return 0;
}