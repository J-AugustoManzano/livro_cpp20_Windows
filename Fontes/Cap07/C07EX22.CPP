// C07EX22.CPP

#include <iostream>

using namespace std;

enum Meses
{
    JANEIRO = 1,
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

int main(void)
{

  Meses mes;
  int mesNumero;

  cout << "Informe o numero do mes (1-12): ";
  cin >> mesNumero;
  cin.ignore();

  if (mesNumero >= JANEIRO and mesNumero <= DEZEMBRO)
    {
      mes = Meses(mesNumero);
      cout << "Voce escolheu o mes " << mes << " (";
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
      cout << ")" << endl;
    }
    else
      cout << "Mes indicado invalido." << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
