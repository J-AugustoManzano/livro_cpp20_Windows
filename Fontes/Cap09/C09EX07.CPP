// C09EX07.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{

  int anum[5];
  int bnum[5];

  fstream arqbin("EXEMPLO4.BIN", ios::binary | ios::out
                 | ios::in | ios::trunc);

  // Entrada de dados e gravacao no arquivo
  cout << "Entre 5 valores inteiros" << endl;
  cout << endl;

  for (int i = 0; i <= 4; ++i)
    {
      cout << "Informe valor " << i + 1 << ": ";
      cin >> anum[i];
      cin.ignore(80, '\n');
    }

  arqbin.write(reinterpret_cast<char*>(anum), sizeof(anum));

  arqbin.seekp(0, ios::beg);

  // Leitura do arquivo e apresentacao dos dados
  cout << endl;
  cout << "Apresenta 5 valores inteiros" << endl;
  cout << endl;

  arqbin.read(reinterpret_cast<char*>(bnum), sizeof(bnum));

  for (int i = 0; i <= 4; ++i)
    {
      cout << "Valor cadastrado " << i + 1 << ": ";
      cout << bnum[i] << endl;
    }

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
