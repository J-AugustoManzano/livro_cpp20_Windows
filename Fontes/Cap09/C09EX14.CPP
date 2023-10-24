// C09EX14.CPP

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{

  string mensagem;
  int tamanho;
  ofstream arqbin("EXEMPLO9.BIN", ios::app | ios::binary);

  cout << "Informe uma mensagem" << endl;
  cout << "--> ";

  getline(cin, mensagem);

  tamanho = mensagem.size();

  // Escreve tamanho da mensagem (inteiro) no arquivo binário
  arqbin.write(reinterpret_cast<const char*>(&tamanho),
                sizeof(int));

  // Escreve os caracteres da mensagem
  arqbin.write(mensagem.c_str(), tamanho);

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();  return 0;
}
