#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        bool prime = true;
        cin >> x;

        if (x == 0 || x == 1)
        {
            prime = false;
        }
        else
        {
            for (int i = 2; i < (x / 2)+1; i++)
            {
                if (x % i == 0)
                {
                    prime = false;
                }
            }
        }

        if (prime==true)
        {
            cout << x << " eh primo\n";
        }
        else
        {
            cout << x << " nao eh primo\n";
        }
    }
}