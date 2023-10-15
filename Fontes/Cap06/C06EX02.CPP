// C06EX02.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int idade = 25;
  int *pidade = 0;

  pidade = &idade;

  cout << "IDADE  = " << idade << " | End: = " << &idade;
  cout << endl;
  cout << "PIDADE = " << *pidade << " | End: = " << &pidade;
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
