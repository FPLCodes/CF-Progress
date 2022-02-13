#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int emp;
    cin >> emp;
 
    int ways = 0, leaders = 0;
 
    for (int i = 0; i < emp; i++)
    {
        leaders++;
        emp--;
        if (emp % leaders == 0) ways++;
    }
    cout << ways << endl;
    return 0;
}