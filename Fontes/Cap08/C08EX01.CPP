// C08EX01.CPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Aluno
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

  // Entrada dos dados
  cout << "Cadastro de aluno" << endl;
  cout << endl;

  cout << "Informe o nome.....: ";
  getline(cin, aluno.nome);
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
  cout << endl;
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
