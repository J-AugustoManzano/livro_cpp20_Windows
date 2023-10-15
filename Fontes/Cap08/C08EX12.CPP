// C08EX12.CPP

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
};

void Aluno::PoeNome(string nome)
{
  this->nome = nome;
}

string Aluno::PegaNome(void)
{
  return nome;
}

void Aluno::PoeNota(char nota[6], int pos)
{
  this->nota[pos] = atof(nota);
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

  int numAlunos;
  float media_gp = 0;
  char entranota[6];
  string nome;
  Aluno *alunos;

  cout << setprecision(2) << fixed;

  cout << "Quantos alunos: ";
  cin >> numAlunos;
  cin.ignore(80, '\n');

  alunos = new Aluno[numAlunos];

  cout << endl;
  for (int i = 0; i <= numAlunos - 1; ++i)
    {
      cout << "Cadastro de aluno " << i + 1 << endl;
      cout << endl;
      cout << "Informe o nome.....: ";
      getline(cin, nome);
      alunos[i].PoeNome(nome);
      cout << endl;
      cout << "Informe as notas:" << endl;
      cout << endl;
      for (int j = 0; j <= 3; ++j)
        {
          cout << setw(2) << j + 1 << "a. nota..........: ";
          cin.getline(entranota, sizeof(entranota));
          alunos[i].PoeNota(entranota, j);
        }
      alunos[i].PoeMedia();
    }

  // Apresentacao dos dados
  cout << endl;
  cout << "Relatorio Geral" << endl;
  cout << endl;
  cout << setiosflags(ios::left);
  cout << setw(41) << "Aluno";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw(7) << "Nota1";
  cout << setw(7) << "Nota2";
  cout << setw(7) << "Nota3";
  cout << setw(7) << "Nota4";
  cout << setw(7) << "Media";
  cout << endl << endl;

  for (int i = 0; i <= numAlunos - 1; ++i)
    {
      cout << resetiosflags(ios::right);
      cout << setiosflags(ios::left);
      cout << setw(41) << alunos[i].PegaNome();
      cout << resetiosflags(ios::left);
      cout << setiosflags(ios::right);
      for (int j = 0; j <= 3; ++j)
        cout << setw(7) << alunos[i].PegaNota(j);
      cout << setw(7) << alunos[i].PegaMedia();
      cout << endl;
      media_gp += alunos[i].PegaMedia();
    }

  media_gp /= numAlunos;

  cout << endl;
  cout << setw(70) << "Media Geral = ";
  cout << setw(6) << media_gp;
  cout << endl << endl;

  delete[] alunos;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
