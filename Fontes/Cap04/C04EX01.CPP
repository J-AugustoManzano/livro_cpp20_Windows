// C04EX01.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int n, i = 1;
  long int fat {1};

  cout << "Programa Fatorial" << endl << endl;
  cout << "Fatorial de que valor: "; cin >> n;
  cin.ignore(80, '\n');

  while (i <= n)
    {
       fat *= i;
       ++i;
    }

  cout << endl;
  cout << "Fatorial de " << n << " = "<< fat << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
