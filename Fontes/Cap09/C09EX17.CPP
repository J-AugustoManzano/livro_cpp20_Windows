// C09EX17.CPP

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Pessoa
{
  public:
    string nome;
    int idade;

    Pessoa() : nome(""), idade(0) {}
    Pessoa(const string &n, int i) : nome(n), idade(i) {}

    void lerArq(ifstream &arqbin)
    {
      int tamanho;
      arqbin.read(reinterpret_cast<char *>(&tamanho),
                  sizeof(int));
      char *caractere = new char[tamanho + 1];
      arqbin.read(caractere, tamanho);
      caractere[tamanho] = '\0';
      nome = caractere;
      arqbin.read(reinterpret_cast<char *>(&idade),
                  sizeof(int));
      delete[] caractere;
    }
};

int main(void)
{

  Pessoa pessoa;
  ifstream arqbin("EXEMPLO10.BIN", ios::in | ios::binary);

  cout << "RELATORIO DE REGISTROS DE DADOS" << endl;
  cout << endl;

  cout << setiosflags(ios::left);
  cout << setw(41) << "Aluno";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw(9) << "Idade" << endl;
  cout << endl;

  while (true)
    {
      pessoa.lerArq(arqbin);
      if (arqbin.eof())
        break;
      cout << resetiosflags(ios::right);
      cout << setiosflags(ios::left);
      cout << setw(41) << pessoa.nome;
      cout << resetiosflags(ios::left);
      cout << setiosflags(ios::right);
      cout << setw(9) << pessoa.idade << endl;
    }

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
