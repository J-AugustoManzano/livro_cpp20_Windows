// C09EX05.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  float num[5];
  ifstream arqbin("EXEMPLO2.BIN", ios::binary | ios::in);

  cout << "Apresentacao de 5 valores numericos:" << endl;
  cout << endl;

  arqbin.read(reinterpret_cast<char*>(num), sizeof(num));

  for (int i = 0; i <= 4; ++i)
    {
      cout << "Valor cadastrado " << i + 1 << ": ";
      cout << num[i] << endl;
    }

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
