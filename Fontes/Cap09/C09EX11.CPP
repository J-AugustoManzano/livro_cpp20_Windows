// C09EX11.CPP

#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

int main(void)
{

  int valor;
  char resp;
  ofstream arqbin;

  arqbin.open("EXEMPLO8.BIN", ios::app | ios::binary);

  cout << "CADASTRO SEQUENCIAL DE VALORES" << endl;

  do
    {
      cout << endl;
      cout << "Entre um valor: ";
      cin >> valor;
      cin.ignore(80, '\n');
      arqbin.write(reinterpret_cast<char*>(&valor),
                   sizeof(valor));
      cout << endl;
      cout << "Deseja continuar? " << endl;
      cout << "[S] Sim \n[qualquer letra] Nao\n\n--> ";
      cin.get(resp);
      cin.ignore();
    }
  while (toupper(resp) == 'S');

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
