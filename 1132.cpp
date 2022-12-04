#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, sum = 0, tmp;

    cin >> x >> y;

    if (x > y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }

    do
    {
        if (y < x)
        {
            break;
        }

        if (y % 13 != 0)
        {
            sum = sum + y;
        }

        y--;

    } while (true);

    cout << sum << endl;
}