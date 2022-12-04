#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, player1 = 0, player2 = 0;


    while (cin >> n && n !=0)
    {
        while (n--)
        {

            cin >> a >> b;

            if (a > b)
            {
                player1++;
            }
            else if (b > a)
            {
                player2++;
            }
        }

        cout << player1 << " " << player2 << endl;
        player1 = 0;
        player2 = 0;
    }
}