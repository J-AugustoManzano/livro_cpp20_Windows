// C07EX09.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  int a[10], i, pesq, comeco, meio, fim;
  bool acha;
  char resp;

  cout << "Pesquisa binaria" << endl;
  cout << endl;

  // Entrada dos valores
  for (i = 0; i <= 9; ++i)
    {
      cout << "Entre " << setw(2) << i + 1 << "o. valor = ";
      cin >> a[i];
      cin.ignore(80, '\n');
    }

  // Classificacao dos valores
  for (i = 0; i <= 8; ++i)
    for (int j = i + 1; j <= 9; ++j)
      if (a[i] > a[j])
        {
          int x = a[i];
          a[i] = a[j];
          a[j] = x;
        }

  // Pesquisa binaria
  do
    {
      cout << endl;
      cout << "Entre valor a ser pesquisado: ";
      cin >> pesq;
      i = 0;
      comeco = 0;
      fim = 9;
      acha = false;
      while (comeco <= fim and acha == false)
        {
          meio = (comeco + fim) / 2;
          if (pesq == a[meio])
            acha = true;
          else
            if (pesq < a[meio])
              fim = meio - 1;
            else
              comeco = meio + 1;
        }
        if (acha == true)
          {
            cout << pesq << " foi localizado na posicao ";
            cout << meio + 1;
          }
        else
          cout << pesq << " nao foi localizado";
      cout << endl;
      cout << "\nContinua? [S]IM/[N]AO + <Enter>: ";
      cin >> resp;
    }
  while (tolower(resp) == 's');

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
