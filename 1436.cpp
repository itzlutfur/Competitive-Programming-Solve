#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cap;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cap = n / 2;
        cout << "Case " << k + 1 << ": " << arr[cap] << endl;
    }

    return 0;
}