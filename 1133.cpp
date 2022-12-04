#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, temp;
    cin >> x >> y;

    if (x < y)
    {
        x++;
        for (int i = x; i < y; i++)
        {
            temp = i % 5;
            if (temp == 2 || temp == 3)
            {
                cout << i << endl;
            }
        }
    }
    else
    {
        y++;
        for (int i = y; i < x; i++)
        {
            temp = i % 5;
            if (temp == 2 || temp == 3)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}