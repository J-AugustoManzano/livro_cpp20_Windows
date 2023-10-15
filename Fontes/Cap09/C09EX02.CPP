// C09EX02.CPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{

  string mensagem;
  ofstream arqtxt("EXEMPLO1.TXT", ios::app);

  cout << "Informe uma mensagem" << endl;
  cout << "--> ";

  getline(cin, mensagem);

  arqtxt << mensagem << endl;

  arqtxt.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
