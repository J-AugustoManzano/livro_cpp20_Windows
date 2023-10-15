// C07EX03.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  int a[5];
  int i, soma = 0;

  cout << setiosflags(ios::right);

  cout << "Somatorio de elementos impares" << endl;
  cout << endl;

  // Entrada de dados

  for (i = 0; i <= 4; ++i)
    {
      cout << "Informe o elemento ";
      cout << setw(1);
      cout << i + 1 << ": ";
      cin >> a[i];
      cin.ignore(80, '\n');
    }

  // Processamento par ou impar

  for (i = 0; i <= 4; ++i)
    if (a[i] % 2 != 0)
       soma += a[i];

  // Apresentacao da soma

  cout << "\nA soma dos elementos equivale a: ";
  cout << setw(4) << soma << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
