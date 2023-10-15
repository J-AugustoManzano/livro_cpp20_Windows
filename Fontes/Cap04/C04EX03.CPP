// C04EX03.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int n, i = 1;
  long int fat {1};

  cout << "Programa Fatorial" << endl << endl;
  cout << "Fatorial de que valor: "; cin >> n;
  cin.ignore(80, '\n');

  do
    {
       fat *= i;
       ++i;
    }
  while (i <= n);

  cout << endl;
  cout << "Fatorial de " << n << " = "<< fat << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
