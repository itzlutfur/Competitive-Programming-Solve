#include <bits/stdc++.h>
using namespace std;

long long int fact(int a){
    if(a>1) 
        return a * fact(a-1);
    else
        return 1;
}

int main()
{
    int m, n;
    while (cin>>m>>n)
    {
        long long int result = fact(m)+fact(n);
        cout << result << "\n";
    }
}