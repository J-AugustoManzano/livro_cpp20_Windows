// C06EX01.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int idade = 25;
  int *pidade = 0;

  pidade = &idade;

  cout << "O valor idade " << idade << " esta armazenado" << endl;
  cout << "no endereco de memoria " << pidade << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
