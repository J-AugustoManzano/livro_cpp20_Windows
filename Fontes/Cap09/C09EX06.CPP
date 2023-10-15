// C09EX06.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{

  int anum[5];
  int bnum[5];

  ofstream arqbinE("EXEMPLO3.BIN", ios::binary | ios::trunc);
  ifstream arqbinS("EXEMPLO3.BIN", ios::binary);

  // Entrada de dados e gravacao no arquivo
  cout << "Entre 5 valores inteiros" << endl;
  cout << endl;

  for (int i = 0; i <= 4; ++i)
    {
      cout << "Informe valor " << i + 1 << ": ";
      cin >> anum[i];
      cin.ignore(80, '\n');
    }

  arqbinE.write(reinterpret_cast<char*>(anum), sizeof(anum));
  arqbinE.close();

  // Leitura do arquivo e apresentacao dos dados
  cout << endl;
  cout << "Apresenta 5 valores inteiros" << endl;
  cout << endl;

  arqbinS.read(reinterpret_cast<char*>(bnum), sizeof(bnum));

  for (int i = 0; i <= 4; ++i)
    {
      cout << "Valor cadastrado " << i + 1 << ": ";
      cout << bnum[i] << endl;
    }

  arqbinS.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
