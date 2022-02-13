#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    string s; cin >> s;
    int len = s.size();
    int calories = 0;
    int num[len];
 
    for (int i = 0; i < len; i++) {
        num[i] = s[i] - '0';
        if (num[i] == 1) calories += a;
        else if (num[i] == 2) calories += b;
        else if (num[i] == 3) calories += c;
        else calories += d;
    }
    cout << calories;
}