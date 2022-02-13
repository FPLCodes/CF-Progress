#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    string hate = "I hate that ";
    string love = "I love that ";
    string loveEnd = "I love it";
    string hateEnd = "I hate it";
 
    if (n == 1)
    {
        cout << hateEnd;
        return 0;
    }
    if (n == 2)
    {
        cout << hate + loveEnd;
        return 0;
    }
    if (n > 2)
    {
        for (int i = 1; i < n + 1; i++)
        {
            if (i == n)
            {
                if ((i % 2) != 0)
                {
                    cout << hateEnd;
                    return 0;
                }
                if ((i % 2) == 0)
                {
                    cout << loveEnd;
                    return 0;
                }
            }
            if ((i % 2) != 0)
            {
                cout << hate;
            }
            if ((i % 2) == 0)
            {
                cout << love;
            }
        }
    }
    return 0;
}