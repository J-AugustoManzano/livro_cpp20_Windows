// C06EX11.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int a = 10;
  int b = 20;

  int *pa = 0, *pb = 0;

  pa = &a;
  pb = &b;

  cout << "Valor de PA = " << *pa << " no endereco = ";
  cout << &pa << endl;
  cout << "Valor de PB = " << *pb << " no endereco = ";
  cout << &pb << endl;
  cout << endl;

  *pa = *pb;

  cout << "Valor de PA = " << *pa << " no endereco = ";
  cout << &pa << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
