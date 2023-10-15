// C09EX08.CPP

#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

int main(void)
{

  int num;
  char resp {'S'};
  fstream arqbin("EXEMPLO5.BIN", ios::binary | ios::in
                 | ios::out | ios::app);

  cout << "Entrada de valores" << endl;
  cout << endl;

  if (not (arqbin.is_open() == true))
    {
      cerr << "Erro ao abrir o arquivo." << endl;
      cerr << "programa abortado." << endl;
      cout << endl;
      cout << "Tecle <Enter> para encerrar... ";
      cin.get();
      return 1;
    }

  do
    {
      cout << "Informe um num inteiro: ";
      cin >> num;
      cin.ignore(80, '\n');

      arqbin.write(reinterpret_cast<char*>(&num),
                   sizeof(num));

      cout << "Deseja continuar?" << endl;
      cout << "Tecle [S] p/ SIM | outra letra p/ NAO: ";
      cin.get(resp);
      cin.ignore();
      cout << endl;
    }
  while (toupper(resp) == 'S');

  arqbin.seekg(0, ios::beg);

  cout << "Valores no arquivo: ";
  while (not (arqbin.eof() == true))
    {
      arqbin.read(reinterpret_cast<char*>(&num),
                  sizeof(num));

      if (not (arqbin.eof() == true))
        cout << num << " ";
    }
  cout << endl;

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
