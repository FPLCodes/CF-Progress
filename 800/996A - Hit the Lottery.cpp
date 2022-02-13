#include <iostream>
 
using namespace std;
 
int main()
{
    int bills = 0;
 
    int n;
    cin >> n;
 
    while (n >= 100) {
        n -= 100;
        bills++;
    }
    while (n >= 20) {
        n -= 20;
        bills++;
    }
    while (n >= 10) {
        n -= 10;
        bills++;
    }
    while (n >= 5) {
        n -= 5;
        bills++;
    }
    while (n >= 1) {
        n -= 1;
        bills++;
    }
    cout << bills;
    return 0;
}