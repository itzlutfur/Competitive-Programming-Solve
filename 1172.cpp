#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        if(x<=0){
            arr[i] = 1;
        } else {
            arr[i] = x;
        }
    }

    for(int i=0; i<10; i++){
        cout << "X[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}