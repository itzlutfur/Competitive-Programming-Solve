#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    float price, sumPrice = 0;

    cout << fixed << setprecision(2);

    cin >> p;

    while (p--)
    {
        int code, quantity;
        cin >> code >> quantity;

        if (code == 1001)
        {
            price = 1.5 * quantity;
        }
        else if (code == 1002)
        {
            price = 2.5 * quantity;
        }
        else if (code == 1003)
        {
            price = 3.5 * quantity;
        }
        else if (code == 1004)
        {
            price = 4.5 * quantity;
        }
        else if (code == 1005)
        {
            price = 5.5 * quantity;
        }

        sumPrice = sumPrice + price;
    }

    cout << sumPrice << endl;
}