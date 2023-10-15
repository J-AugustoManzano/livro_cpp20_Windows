// C07EX05.CPP

#include <iostream>
#include <iomanip>
#include <string> // Para uso de string

using namespace std;

int main(void)
{

  int i;
  string nome[10];

  cout << "Leitura e apresentacao de nomes" << endl;
  cout << endl;

  // Entrada dos nomes
  for (i = 0; i <= 9; ++i) {
    cout << "Informe o " << setw(2) << i + 1;
    cout << "o. nome: ";
    getline(cin, nome[i]);
  }
  cout << endl;

  // Apresentacao dos nomes
  for (i = 0; i <= 9; ++i)
    cout << setw(2) << i + 1 << " nome: " << nome[i] << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
