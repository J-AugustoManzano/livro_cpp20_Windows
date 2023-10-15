// C09EX04.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{

  float num[5];
  ofstream arqbin("EXEMPLO2.BIN", ios::binary | ios::trunc);

  cout << "Entre 5 valores numericos:" << endl;
  cout << endl;

  for (int i = 0; i <= 4; ++i)
    {
      cout << "Informe valor " << i + 1 << ": ";
      cin >> num[i];
      cin.ignore(80, '\n');
    }

  arqbin.write(reinterpret_cast<char*>(num), sizeof(num));

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
