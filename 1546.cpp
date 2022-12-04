#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t;

    cin >> n;

    while (n--)
    {
        cin >> k;
        while (k--)
        {
            cin >> t;

            if (t == 1)
            {
                cout << "Rolien" << endl;
            }
            else if (t == 2)
            {
                cout << "Naej" << endl;
            }

            else if (t == 3)
            {
                cout << "Elehcim" << endl;
            }

            else if (t == 4)
            {
                cout << "Odranoel" << endl;
            }
        }
    }
}