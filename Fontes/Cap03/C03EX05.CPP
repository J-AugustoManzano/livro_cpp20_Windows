// C03EX05.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int numero;

  cout << "Entre um valor: "; cin >> numero;
  cin.ignore(80, '\n');
  cout << endl;

  if (numero >= 20 and numero <= 90)
    cout << "O valor esta entre 20 e 90.";
  else
    cout << "O valor nao esta entre 20 e 90.";

  cout << "\n" << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
