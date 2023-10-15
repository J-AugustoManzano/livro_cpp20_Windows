// C07EX08.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  int a[10], i, j, pesq;
  bool acha;
  char resp;

  cout << "Pesquisa sequencial" << endl;
  cout << endl;

  // Entrada dos valores
  for (i = 0; i <= 9; ++i)
    {
      cout << "Entre " << setw(2) << i+1 << "o. valor = ";
      cin >> a[i];
      cin.ignore(80, '\n');
    }
  cout << endl;

  // Apresentacao dos valores
  do
    {
      cout << endl;
      cout << "Entre valor a ser pesquisado: ";
      cin >> pesq;
      cin.ignore(80, '\n');
      i = 0;
      acha = false;
      while (i <= 9 and acha == false)
        if (pesq == a[i])
          acha = true;
        else
          ++i;
      if (acha == true)
        cout << pesq << " localizado na posicao " << i + 1;
      else
        cout << pesq << " nao foi localizado";
      cout << endl;
      cout << "\nContinua? [S]IM/[N]AO + <Enter>: ";
      cin >> resp;

    }
  while (toupper(resp) == 'S');

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
