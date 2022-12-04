#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, l, ans;
    float PI = 3.1415, den;

    cin >> r >> l;

    den = 4*PI*r*r*r/3;

    ans = l/den;

    cout << ans << endl;


    return 0;
}