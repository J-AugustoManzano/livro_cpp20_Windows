// C06EX04.CPP

#include <iostream>

using namespace std;

int main(void)
{

  char        C, *PC;
  int         I, *PI;
  short       S, *PS;
  float       F, *PF;
  double      D, *PD;
  long double L, *PL;
  bool        B, *PB;

  cout << "Tamanho 'char' ..........: " << sizeof(C);
  cout << " bytes.\n";
  cout << "Tamanho 'int' ...........: " << sizeof(I);
  cout << " bytes.\n";
  cout << "Tamanho 'short' .........: " << sizeof(S);
  cout << " bytes.\n";
  cout << "Tamanho 'float' .........: " << sizeof(F);
  cout << " bytes.\n";
  cout << "Tamanho 'double' ........: " << sizeof(D);
  cout << " bytes.\n";
  cout << "Tamanho 'long double' ...: " << sizeof(L);
  cout << " bytes.\n";
  cout << "Tamanho 'bool' ..........: " << sizeof(B);
  cout << " byte.\n";
  cout << endl;

  cout << "Tamanho 'p char' ........: " << sizeof(PC);
  cout << " bytes.\n";
  cout << "Tamanho 'p int' .........: " << sizeof(PI);
  cout << " bytes.\n";
  cout << "Tamanho 'p short' .......: " << sizeof(PS);
  cout << " bytes.\n";
  cout << "Tamanho 'p float' .......: " << sizeof(PF);
  cout << " bytes.\n";
  cout << "Tamanho 'p double' ......: " << sizeof(PD);
  cout << " bytes.\n";
  cout << "Tamanho 'p long double' .: " << sizeof(PL);
  cout << " bytes.\n";
  cout << "Tamanho 'p bool' ........: " << sizeof(PB);
  cout << " bytes.\n";

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
