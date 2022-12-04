#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, flag = 0, tmp = 0;

    for (int i = 0; i < 100; i++)
    {
        cin >> number;

        if (number > 0)
        {
            if (tmp < number)
            {
                tmp = number;
                flag = i;
            }
        }
    }

    cout << tmp << endl << flag + 1 << endl;
}