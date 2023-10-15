// C09EX10.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{

  fstream arqbin("EXEMPLO6.BIN", ios::in | ios::binary);

  if (arqbin.fail() == true)
    {
      cout << "O arquivo nao existe, criando..." << endl;

      arqbin.open("EXEMPLO6.BIN", ios::out | ios::binary);

      if (arqbin.good() == true)
        cout << "Arquivo criado com sucesso!" << endl;
      else
        cerr << "Erro ao criar o arquivo." << endl;
    }
  else
    cout << "O arquivo ja existe." << endl;

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
