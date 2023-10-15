// C06EX07.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int idade = 25;
  int *pidade = NULL;

  pidade = &idade;

  cout << "Variavel IDADE ....: " << idade << endl;
  cout << "Ponteiro PIDADE ...: " << pidade << endl;

  (*pidade)++;

  cout << "Variavel IDADE ....: " << idade << endl;
  cout << "Ponteiro PIDADE ...: " << pidade << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
