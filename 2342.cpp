#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, p, q, result;
  char c;
  char plus = '+';
  char multi = '*';

  cin >> n >> p >> c >> q;

  if (c == plus)
  {
    result = p + q;
  }
  else if (c == multi)
  {
    result = p * q;
  }

  if (result <= n)
  {
    cout << "OK" << endl;
  }
  else
  {
    cout << "OVERFLOW" << endl;
  }

  return 0;
}