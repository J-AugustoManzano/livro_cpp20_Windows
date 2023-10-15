// C09EX15.CPP

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{

  int tamanho;
  char *caractere;
  ifstream arqbin("EXEMPLO9.BIN", ios::in | ios::binary);

  while (true)
    {
      // Lê o tamanho do caractere
      arqbin.read(reinterpret_cast<char*>(&tamanho),
                  sizeof(int));
      if (arqbin.eof() == true)
        break;
      // Aloca um arranjo de caracteres para a caractere
      // Adicione 1 para o caractere nulo
      caractere = new char[tamanho + 1];
      arqbin.read(caractere, tamanho);
      // Adiciona o caractere nulo no final da cadeia
      caractere[tamanho] = '\0';
      cout << caractere << endl;
      delete[] caractere;
    }

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
