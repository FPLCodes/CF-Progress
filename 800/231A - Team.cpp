#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    int solution = 0;
    while (n--) {
        int sure = 0;
        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            if (x == 1) sure++;
        }
        if (sure >= 2) solution++;
    }
    cout << solution;
}