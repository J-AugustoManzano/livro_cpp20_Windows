// C02EX04.CPP

#include <iostream>

using namespace std;

int main(void)
{

  char nome[50];

  cout << "Ola.\nQual sua graca? ";
  cin.getline(nome, 50);

  cout << endl;
  cout << "Oi " << nome << ", vamos estudar." << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
