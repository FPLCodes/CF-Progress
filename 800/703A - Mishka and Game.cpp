#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    int rounds[(n * 2)];
 
    for (int i = 0; i < (n * 2); i++) {
        cin >> rounds[i];
    }
    int m = 0, c = 0;
 
    for (int i = 0; i < (n * 2); i += 2) {
        if (rounds[i] > rounds[i + 1]) m++;
        else if (rounds[i] < rounds[i + 1]) c++;
    }
 
    if (m > c) cout << "Mishka\n";
    else if (m < c) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
 
    return 0;
}