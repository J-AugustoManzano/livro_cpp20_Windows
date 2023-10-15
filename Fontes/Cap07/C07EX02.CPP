// C07EX02.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  int i, a[10], b[10];

  cout << setiosflags(ios::right);
  cout << "Exemplo de checagem de indice" << endl;
  cout << endl;

  // Entrada de dados

  for (i = 0; i <= 9; ++i)
    {
      cout << "Informe o elemento ";
      cout << setw(2);
      cout << i + 1 << ": ";
      cin >> a[i];
      cin.ignore(80, '\n');
    }

  // Processamento par ou impar

  for (i = 0; i <= 9; ++i)
    if (i % 2 == 0)
      b[i] = a[i] * 5;
    else
      b[i] = a[i] + 5;

  // apresentacao das matrizes

  for (i = 0; i <= 9; ++i)
    {
      cout << "\nA[" << setw(2) << i + 1 << "] = ";
      cout << setw(3) << a[i];
    }
  cout << endl;

  for (i = 0; i <= 9; ++i)
    {
      cout << "\nB[" << setw(2) << i + 1 << "] = ";
      cout << setw(3) << b[i];
    }
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
