// C07EX11.CPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(void)
{

  int tamanho = 0, i;
  int *pmat = nullptr;

  do
    {

      tamanho++;

      pmat = (int *) realloc(pmat, tamanho * sizeof(int));

      if (pmat == nullptr)
        {
          cout << "*** Memoria insuficiente ***" << endl;
          delete [] pmat;
          exit(1);
        }
      else
        {
          cout << "MATRIZ[" << setw(2) << tamanho << "] ";
          cout << "(0 para encerrar) = ";
          cin >> pmat[tamanho - 1];
          cin.ignore(80, '\n');
        }

    }
  while (pmat[tamanho - 1] != 0);

  cout << endl;
  cout << "Os valores informados sao:" << endl << endl;
  for (i = 0; i < tamanho - 1; i++)
    {
       cout << "MATRIZ[" << setw(2) << i + 1 << "] = ";
       cout << setw(3) << pmat[i] << endl;
    }

  delete [] pmat;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
