// C08EX08.CPP

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
  private:
    string nome;
    int idade;

  public:
    // Construtor
    Aluno(string nome, int idade)
      {
        this->nome = nome;
        this->idade = idade;
      }

    // Destrutor
    ~Aluno()
      {}

    void Apresentar()
      {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
      }
};

int main(void)
{

  // Criar objeto "aluno1" e "aluno2"
  Aluno aluno1("Mario", 20);
  Aluno aluno2("Carla", 19);

  // Apresentar os detalhes do aluno
  aluno1.Apresentar();
  cout << endl;
  aluno2.Apresentar();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
