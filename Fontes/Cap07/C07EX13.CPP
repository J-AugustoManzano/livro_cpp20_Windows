// C07EX13.CPP

#include <iostream>

using namespace std;

void uplowcase(char *pmatriz, int tipo)
{
  if (tipo == 1)
    while (*pmatriz)
      cout.put(toupper(*pmatriz++));
  else
    while (*pmatriz)
      cout.put(tolower(*pmatriz++));
}

int main(void)
{

  char letra;
  char mensagem[50];

  cout << "Entre uma mensagem: ";
  cin.getline(mensagem, sizeof(mensagem));

  cout << endl;

  uplowcase(mensagem, 1); // apresenta maiusculo
  cout << endl;

  uplowcase(mensagem, 2); // apresenta minusculo
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
