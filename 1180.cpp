#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tmp = 10000, position;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < tmp)
        {
            tmp = arr[i];
            position = i;
        }
    }

    cout << "Menor valor: " << tmp << endl;
    cout << "Posicao: " << position << endl;
}