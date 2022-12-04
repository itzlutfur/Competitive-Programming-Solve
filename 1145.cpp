#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, flag = 0;

    cin >> x >> y;

    for (int i = 1; i <= y; i++)
    {
        
        flag++;
        if (flag == x)
        {
            cout << i << endl;
            flag = 0;
        } else {
            cout << i << " ";
        }
    }
}