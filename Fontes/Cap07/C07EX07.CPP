// C07EX07.CPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{

  string nome[5];
  string x;

  cout << "Classificacao de nomes" << endl;
  cout << endl;

  // Entrada dos nome
  for (int i = 0; i <= 4; ++i)
   {
      cout << "Entre o " << setw(2) << i + 1 << "o. nome: ";
      getline(cin, nome[i]);
    }
  cout << endl;

  // Classificacao dos nomes
  for (int i = 0; i < 4; ++i)
    for (int j = i + 1; j <= 4; ++j)
      if (nome[i] > nome[j])
        {
          x = nome[i];
          nome[i] = nome[j];
          nome[j] = x;
        }

  // Apresentacao dos nome classificados
  for (int i = 0; i <= 4; ++i)
    {
      cout << setw(2) << i + 1 << "o. nome: ";
      cout << nome[i] << endl;
    }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
