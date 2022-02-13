#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char table[2];
    char hand[10];
 
    for (int i = 0; i < 2; i++) {
            cin >> table[i];
    }
 
    for (int i = 0; i < 10; i++)
    {
        cin >> hand[i];
    }
 
    for (int i = 0; i < 10; i++) {
        if (hand[i] == table[0] || hand[i] == table[1]) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}