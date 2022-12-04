#include <bits/stdc++.h>
using namespace std;

int main()
{

    int flag = 0;
    for (int i = 1; i < 10; i++)
    {
        if(i % 2 != 0){
            for (int j = i + 6; 1; j--)
            {
            cout << "I=" << i << " " << "J=" << j << endl;
            flag++;
            if(flag==3) break;
            }
        }
        flag = 0;
    }
}