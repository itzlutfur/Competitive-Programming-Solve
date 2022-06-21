#include <bits/stdc++.h>
using namespace std;

void arrRev(int arr[])
{

    int temp;
    for (int i = 0; i < 20 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[19 - i];
        arr[19 - i] = temp;
    }
}

int main()
{
    int x;
    int n[20];

    for (int i = 0; i < 20; i++)
    {
        cin >> x;
        n[i] = x;
    }

    arrRev(n);

    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}