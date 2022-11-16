#include <bits/stdc++.h>
using namespace std;

int main()
{

  int up = 0, down = 0;
  int arr[5];

  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < 5; i++)
  {
    arr[i] < arr[i + 1] ? up++ : 0;
  }

  for (int i = 4; i > 0; i--)
  {
    arr[i] < arr[i - 1] ? down++ : 0;
  }

  if (up == 4)
  {
    cout << 'C' << endl;
  }
  else if (down == 4)
  {
    cout << 'D' << endl;
  }
  else
  {
    cout << 'N' << endl;
  }

  return 0;
}