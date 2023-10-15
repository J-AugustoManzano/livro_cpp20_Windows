// C08EX04.CPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Sala
{
  public:
    int sala;
};

class Aluno: public Sala
{
  public:
    string nome;
    float nota[4];
    float media;
    float PoeMedia(void);
} aluno;

float Aluno::PoeMedia(void)
{
  media = 0;
  for (int i = 0; i <= 3; ++i)
    media += nota[i];
  return media /= 4;
}

int main(void)
{

  cout << setprecision(2) << fixed;

  char entranota[6];
  char entrasala[3];

  // Entrada dos dados
  cout << "Cadastro de aluno" << endl;
  cout << endl;

  cout << "Informe o nome.....: ";
  getline(cin, aluno.nome);
  cout << endl;

  cout << "Informe a sala.....: ";
  cin.getline(entrasala, sizeof(entrasala));
  aluno.sala = atoi(entrasala);
  cout << endl;

  cout << "Informe as notas:" << endl;
  cout << endl;
  for (int i = 0; i <= 3; ++i)
    {
      cout << setw(2) << i + 1 << "a. nota..........: ";
      cin.getline(entranota, sizeof(entranota));
      aluno.nota[i] = atof(entranota);
    }
    cout << endl;

  aluno.PoeMedia();

  // Apresentacao dos dados
  cout << endl;
  cout << "Relatorio" << endl;
  cout << endl;
  cout << "Nome..........: " << aluno.nome << endl;
  cout << "Sala..........: " << aluno.sala << endl;  cout << endl;
  for (int i = 0; i <= 3; ++i)
    {
      cout << setw(2) << i + 1 << "a. nota.....: ";
      cout << setw(5) << aluno.nota[i] << endl;
    }
  cout << endl;
  cout << "Media.........: " << setw(5) << aluno.media;
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
