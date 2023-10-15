// C07EX19.CPP

#include <iostream>

using namespace std;

int main(void)
{

  // Definicao da estrutura de enumeracao

  enum Meses
    {
      JANEIRO,
      FEVEREIRO,
      MARCO,
      ABRIL,
      MAIO,
      JUNHO,
      JULHO,
      AGOSTO,
      SETEMBRO,
      OUTUBRO,
      NOVEMBRO,
      DEZEMBRO
    };

  Meses mes;

  cout << "Teste de acesso, lista enumerada" << endl;
  cout << endl;

  mes = JANEIRO;

  cout << "Mes definido = " << mes;
  cout << " em extenso equivale a ";
  switch (mes)
    {
      case JANEIRO   : cout << "janeiro";   break;
      case FEVEREIRO : cout << "fevereiro"; break;
      case MARCO     : cout << "marco";     break;
      case ABRIL     : cout << "abril";     break;
      case MAIO      : cout << "maio";      break;
      case JUNHO     : cout << "junho";     break;
      case JULHO     : cout << "julho";     break;
      case AGOSTO    : cout << "agosto";    break;
      case SETEMBRO  : cout << "setembro";  break;
      case OUTUBRO   : cout << "outubro";   break;
      case NOVEMBRO  : cout << "novembro";  break;
      case DEZEMBRO  : cout << "dezembro";  break;
    }
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
