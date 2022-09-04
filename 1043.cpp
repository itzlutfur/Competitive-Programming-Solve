#include <bits/stdc++.h>
using namespace std;

int main()
{
  float a, b, c, peri, area;
  cin >> a >> b >> c;

  cout << fixed << setprecision(1);

  if (a > b && a > c)
  {
    if (b + c > a)
    {
      peri = a + b + c;
      cout << "Perimetro = " << peri << endl;
    }
    else
    {
      area = ((a + b) / 2) * c;
      cout << "Area = " << area << endl;
    }
  }
  else if (b > c)
  {
    if (a + c > b)
    {
      peri = a + b + c;
      cout << "Perimetro = " << peri << endl;
    }
    else
    {
      area = ((a + b) / 2) * c;
      cout << "Area = " << area << endl;
    }
  }
  else
  {
    if (b + a > c)
    {
      peri = a + b + c;
      cout << "Perimetro = " << peri << endl;
    }
    else
    {
      area = ((a + b) / 2) * c;
      cout << "Area = " << area << endl;
    }
  }

  return 0;
}