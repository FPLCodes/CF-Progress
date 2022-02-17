#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;

int main()
{
    int n; cin >> n;
    char com[n];

    for (int i = 0; i < n; i++) {
        cin >> com[i];
    }
    int left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        if (com[i] == 'L') {
            left++;
        }
        else if (com[i] == 'R') {
            right++;
        }
    }
    int sum = left + right;

    cout << sum + 1;
}