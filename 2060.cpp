#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0;
    cin >> n;

    while (n--)
    {

        cin >> l;

        if (l % 2 == 0)
        {
            flag2++;
        }

        if (l % 3 == 0)
        {
            flag3++;
        }
        
        if (l % 4 == 0)
        {
            flag4++;
        }
        
        if (l % 5 == 0)
        {
            flag5++;
        }
        
    }

    cout << flag2 << " " << "Multiplo(s) de" << " " << "2" << endl;
    cout << flag3 << " " << "Multiplo(s) de" << " " << "3" << endl;
    cout << flag4 << " " << "Multiplo(s) de" << " " << "4" << endl;
    cout << flag5 << " " << "Multiplo(s) de" << " " << "5" << endl;
}