#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 2, tmp;

    cin >> n;

    while (1)
    {
        if (i == 10000){
            break;
        }
            

        tmp = i % n;
        if (tmp == 2)
        {
            cout << i << endl;
        }

        i++;
    }
}