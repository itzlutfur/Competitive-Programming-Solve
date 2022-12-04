#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    while (cin >> x && x != 0)
    {
        for (int i = 1; i <= x; i++)
        {
            if (i == x)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}