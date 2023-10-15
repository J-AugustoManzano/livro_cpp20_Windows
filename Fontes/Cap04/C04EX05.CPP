// C04EX05.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int n;
  long int fat = 1;

  cout << "Programa Fatorial" << endl << endl;
  cout << "Fatorial de que valor: "; cin >> n;
  cin.ignore(80, '\n');

  for (int i = 1; i <= n; ++i)
  {
    fat *= i;
  }

  cout << endl;
  cout << "Fatorial de " << n << " = " << fat << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
