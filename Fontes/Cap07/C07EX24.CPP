// C07EX24.CPP

#include <iostream>

using namespace std;

typedef float   real;
typedef int     integer;
typedef integer inteiro;

int main(void)
{

  inteiro a;
  real b;

  cout << "Entre um valor inteiro: ";
  cin >> a;
  cin.ignore(80, '\n');
  cout << "Foi informado o valor: " << a << endl;

  cout << endl;
  cout << "Entre um valor real: ";
  cin >> b;
  cin.ignore(80, '\n');
  cout << "Foi informado o valor: " << b << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
