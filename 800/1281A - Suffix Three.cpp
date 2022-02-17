#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    int n; cin >> n;
    int len;
    string s[n];
 
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        len = s[i].size();
        if (s[i][len-1] == 'o' && s[i][len-2] == 'p') cout << "FILIPINO\n";
        else if (s[i][len-1] == 'u' && s[i][len-2] == 's') cout << "JAPANESE\n";
        else if (s[i][len-1] == 'a' && s[i][len-2] == 'd') cout << "KOREAN\n";
    }
    return 0;
}