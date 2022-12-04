#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, z, tmp, flag = 0, sum = 0;
    cin >> x;

    while (1)
    {
        cin >> tmp;

        if (tmp > x)
        {
            z = tmp;
            break;
        }
    }

    for (int i = x; true; i++)
    {
        flag++;
        sum = sum + i;
        if (sum > z)
        {
            break;
        }
    }

    cout << flag << endl;
}