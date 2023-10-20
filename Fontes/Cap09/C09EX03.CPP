// C09EX03.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{

  char caractere;
  ifstream arqtxt("EXEMPLO1.TXT", ios::in);

  while (not (arqtxt.eof() == true))
    {
       caractere = arqtxt.get();
       cout.put(caractere);
    }

  arqtxt.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";


  cin.get();
  return 0;
}
