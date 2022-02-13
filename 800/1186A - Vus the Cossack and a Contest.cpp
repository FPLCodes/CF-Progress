#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, pen, book;
    cin >> n >> pen >> book;
 
    if (pen >= n && book >= n) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}