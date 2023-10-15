// C07EX06.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  int a[5], i, j, x;

  cout << "Classificacao de valores numericos" << endl;
  cout << endl;

  // Entrada dos valores
  for (i = 0; i <= 4; ++i)
  {
    cout << "Entre " << setw(2) << i + 1 << "o. valor = ";
    cin >> a[i];
    cin.ignore(80, '\n');
  }
  cout << endl;

  // Classificacao dos valores
  for (i = 0; i <= 3; ++i)
    for (j = i + 1; j <= 4; ++j)
      if (a[i] > a[j])
        {
          x = a[i];
          a[i] = a[j];
          a[j] = x;
        }

  // Apresentacao dos valores
  for (i = 0; i <= 4; ++i)
    {
      cout << setw(2) << i + 1 << "o. valor = ";
      cout << a[i] << endl;
    }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
