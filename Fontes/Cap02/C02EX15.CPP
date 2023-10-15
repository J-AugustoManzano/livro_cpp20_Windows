// C02EX15.CPP

/**
  O programa seguinte demonstra o uso de linhas de
  Comentários usadas em um codigo de programa escrito na
  linguagem de programacao C++. O programa apresenta a
  quantidade de bits de cada tipo de dado suportado em C++.
*/

#include <iostream>

using namespace std;

/**
  Funcao principal.
  @return 0 se o programa for bem-sucedido.
*/
int main(void)
{
  // Declaracao de variaveis para varios tipos de dados.
  unsigned short int us;
  short              sh;
  short int          si;
  signed short int   ss;
  signed int         sd;
  unsigned int       ui;
  unsigned long int  ul;
  int                in;
  long               lo;
  signed long int    sl;
  long int           li;
  char               ch;
  signed char        sc;
  unsigned char      uc;
  float              fl;
  double             db;
  long double        ld;
  bool               bo;

  // Configura a formatacao de saida.
  cout << "Tipos de dados e seus tamanhos em bits.\n";
  cout << endl;

  // Apresenta os tamanhos dos tipos de dados em bits.
  cout << "unsigned short int = " << sizeof(us) * 8 << "\n";
  cout << "short              = " << sizeof(sh) * 8 << "\n";
  cout << "short int          = " << sizeof(si) * 8 << "\n";
  cout << "signed short int   = " << sizeof(ss) * 8 << "\n";
  cout << "signed int         = " << sizeof(sd) * 8 << "\n";
  cout << "unsigned int       = " << sizeof(ui) * 8 << "\n";
  cout << "unsigned long int  = " << sizeof(ul) * 8 << "\n";
  cout << "int                = " << sizeof(in) * 8 << "\n";
  cout << "long               = " << sizeof(lo) * 8 << "\n";
  cout << "long int           = " << sizeof(li) * 8 << "\n";
  cout << "signed long int    = " << sizeof(sl) * 8 << "\n";
  cout << "char               = " << sizeof(ch) * 8 << "\n";
  cout << "signed char        = " << sizeof(sc) * 8 << "\n";
  cout << "unsigned char      = " << sizeof(uc) * 8 << "\n";
  cout << "float              = " << sizeof(fl) * 8 << "\n";
  cout << "double             = " << sizeof(db) * 8 << "\n";
  cout << "long double        = " << sizeof(ld) * 8 << "\n";
  cout << "bool               = " << sizeof(bo) * 8 << "\n";
  cout << endl;

  // Aguarda a entrada do usuario para encerrar.
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
