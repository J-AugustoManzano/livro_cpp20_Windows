// C09EX16.CPP

#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

class Pessoa
{
  public:
    string nome;
    int idade;

    Pessoa() : nome(""), idade(0) {}
    Pessoa(const string &n, int i) : nome(n), idade(i) {}

    void escreverArq(ofstream &arqbin)
    {
      int tamanho = nome.size();
      arqbin.write(reinterpret_cast<char *>(&tamanho),
                   sizeof(int));
      arqbin.write(nome.c_str(), tamanho);
      arqbin.write(reinterpret_cast<char *>(&idade),
                   sizeof(int));
    }
};

int main(void)
{

  char resp;
  ofstream arqbin("EXEMPLO10.BIN", ios::app | ios::out
                  | ios::binary);

  cout << "CADASTRO DE REGISTRO DE DADOS" << endl;

  do
    {
      cout << endl;
      cout << "Entre nome ...: ";
      string nome;
      getline(cin, nome);
      cout << "Entre idade ..: ";
      int idade;
      cin >> idade;
      cin.ignore(80, '\n');

      Pessoa pessoa(nome, idade);
      pessoa.escreverArq(arqbin);

      cout << endl;
      cout << "Deseja continuar? [S] Sim ";
      cout << "[qualquer letra] Nao --> ";
      cin.get(resp);
      cin.ignore();
    }
  while (toupper(resp) == 'S');

  arqbin.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
