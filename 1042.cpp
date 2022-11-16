#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y, z, temp;
  cin >> x >> y >> z;

  int arr[3] = {x, y, z};

  if (x > y && x > z)
  {
    if (y > z)
    {
      cout << z << endl;
      cout << y << endl;
    }
    else
    {
      cout << y << endl;
      cout << z << endl;
    }
    cout << x << endl;
  }
  else if (y > x && y > z)
  {
    if (x > z)
    {
      cout << z << endl;
      cout << x << endl;
    }
    else
    {
      cout << x << endl;
      cout << z << endl;
    }
    cout << y << endl;
  }
  else if (z > y && z > x)
  {
    if (x > y)
    {
      cout << y << endl;
      cout << x << endl;
    }
    else
    {
      cout << x << endl;
      cout << y << endl;
    }
    cout << z << endl;
  }
  cout << endl;

  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}