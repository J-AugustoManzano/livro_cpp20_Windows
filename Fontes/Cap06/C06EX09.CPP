// C06EX09.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int idade = 25;
  int *pidade1 = NULL;
  int *pidade2 = nullptr;

  pidade1 = &idade;
  pidade2 = pidade1;

  cout << "Variavel IDADE ....: " << idade << endl;
  cout << "Ponteiro PIDADE1 ..: " << pidade1 << endl;
  cout << "Ponteiro PIDADE2 ..: " << pidade2 << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
