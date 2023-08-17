#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y;
    while (cin>>x>>y)
    {
        if(y>x){
            swap(x,y);
            cout << x - y << "\n";
        } else {
            cout << x - y << "\n";
        }
    }
}