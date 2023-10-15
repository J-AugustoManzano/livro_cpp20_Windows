// C06EX12.CPP

#include <iostream>

using namespace std;

int main (void)
{

  char PAUSA;

  int A = 1;
  int B = 1;

  int *PA = nullptr;
  int *PB = nullptr;

  PA = &A;
  PB = &B;

  cout << "Valor A = " << *PA << " no endereco " << &PA;
  cout << "." << endl;
  cout << "Valor B = " << *PB << " no endereco " << &PB;
  cout << "." << endl;
  cout << endl;

  if (PA > PB)
    cout << "PA esta a frente de *PB.";
  else
    cout << "PA nao esta a frente de *PB.";
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
