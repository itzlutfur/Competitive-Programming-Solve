#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max, min, X, Y;
    int sum = 0;

    cin >> X >> Y;

    max = X>Y ? X : Y;
    min = max==X ? Y: X;

    for(int i = min+1; i < max; i++){
        if(i%2!=0){
            sum += i;
        }
    }

    cout << sum << endl; 

    return 0;
}