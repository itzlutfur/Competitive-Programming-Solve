#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float x, y, ans;

    cout << fixed << setprecision(1);

    cin >> n;

    while (n--)
    {
        cin >> x >> y;
        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
        } else {
            ans = x/y;
            cout << ans << endl;
        }
    }
}