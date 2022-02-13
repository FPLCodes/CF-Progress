#include <iostream>
using namespace std;
 
int main()
{
    int n;
    int sum = 0;
    
    cin >> n;
    string shapes[n];
 
    for (int i = 0; i < n; i++) {
        cin >> shapes[i];
        if (shapes[i] == "Tetrahedron")
        {
            sum += 4;
        }
        else if (shapes[i] == "Cube")
        {
            sum += 6;
        }
        else if (shapes[i] == "Octahedron")
        {
            sum += 8;
        }
        else if (shapes[i] == "Dodecahedron")
        {
            sum += 12;
        }
        else if (shapes[i] == "Icosahedron")
        {
            sum += 20;
        }
    }
 
    cout << sum;
    return 0;
}