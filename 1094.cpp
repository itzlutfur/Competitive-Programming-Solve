#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, amount;
    float total = 0, cobaias = 0, ratos = 0, sapos = 0;
    float perCoel, perRat, perSap;
    char c;

    cin >> n;

    while (n--)
    {
        cin >> amount >> c;

        if (c == 'C')
        {
            cobaias = cobaias + amount;
        }

        if (c == 'R')
        {
            ratos = ratos + amount;
        }

        if (c == 'S')
        {
            sapos = sapos + amount;
        }

        total = total + amount;

    }


    cout << fixed << setprecision(0);

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << cobaias << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    
    perCoel = (cobaias/total)*100;
    perRat = (ratos/total)*100;
    perSap = (sapos/total)*100;

    cout << fixed << setprecision(2);

    cout << "Percentual de coelhos: " << perCoel << " " << "%" << endl;
    cout << "Percentual de ratos: " << perRat << " " << "%" << endl;
    cout << "Percentual de sapos: " << perSap << " " << "%" << endl;
    

}