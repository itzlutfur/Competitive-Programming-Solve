#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    float tmp = 100, ti;

    cout << fixed << setprecision(2);

    while (cin >> t)
    {

        while (t--)
        {
            cin >> ti;

            if (tmp > ti)
            {
                tmp = ti;
            }
        }
        cout << tmp << endl;
        tmp = 100;
    }

    return 0;
}