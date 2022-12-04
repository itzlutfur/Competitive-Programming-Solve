#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, alc = 0, gas = 0, dies = 0;

    while (1)
    {
        cin >> number;

        if (number == 1)
        {
            alc++;
        }
        else if (number == 2)
        {
            gas++;
        }
        else if (number == 3)
        {
            dies++;
        }
        else if (number == 4)
        {
            break;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dies << endl;

}