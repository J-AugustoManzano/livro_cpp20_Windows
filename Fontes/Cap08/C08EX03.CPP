// C08EX03.CPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Aluno
{
  private:
    string nome;
    float nota[4];
    float media;

  public:
    void PoeNome(string nome);
    string PegaNome(void);
    void PoeNota(char NT[6], int pos);
    float PegaNota(int pos);
    void PoeMedia(void);
    float PegaMedia(void);
} aluno;

void Aluno::PoeNome(string nome)
{
  this->nome = nome;
}

string Aluno::PegaNome(void)
{
  return nome;
}

void Aluno::PoeNota(char NT[6], int pos)
{
  nota[pos] = atof(NT);
}

float Aluno::PegaNota(int pos)
{
  return nota[pos];
}

void Aluno::PoeMedia(void)
{
  media = 0;
  for (int i = 0; i <= 3; ++i)
    media += nota[i];
  media /= 4;
}

float Aluno::PegaMedia(void)
{
  return media;
}

int main(void)
{

  cout << setprecision(2) << fixed;

  char entranota[6];
  string nome;

  // Entrada dos dados
  cout << "Cadastro de aluno" << endl;
  cout << endl;

  cout << "Informe o nome.....: ";
  getline(cin, nome);
  aluno.PoeNome(nome);
  cout << endl;

  cout << "Informe as notas:" << endl;
  cout << endl;
  for (int i = 0; i <= 3; ++i)
    {
      cout << setw(2) << i + 1 << "a. nota..........: ";
      cin.getline(entranota, sizeof(entranota));
      aluno.PoeNota(entranota, i);
    }
  cout << endl;

  aluno.PoeMedia();

  // Apresentacao dos dados
  cout << endl;
  cout << "Relatorio" << endl;
  cout << endl;
  cout << "Nome..........: " << aluno.PegaNome() << endl;
  cout << endl;
  for (int i = 0; i <= 3; ++i)
    {
      cout << setw(2) << i + 1 << "a. nota.....: ";
      cout << setw(5) << aluno.PegaNota(i) << endl;
    }
  cout << endl;
  cout << "Media.........: ";
  cout << setw(5) << aluno.PegaMedia();
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
