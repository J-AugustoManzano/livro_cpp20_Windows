// C08EX13.CPP

#include <iostream>
#include <iomanip>
#include "escola.h"

using namespace std;

int main(void)
{

  int numAlunos;
  float media_gp = 0;
  string nome;
  Aluno* alunos;

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
      alunos[i].nome = nome;
      cout << endl;
      cout << "Informe as notas:" << endl;
      cout << endl;
      for (int j = 0; j <= 3; ++j)
        {
          cout << setw(2) << j + 1 << "a. nota..........: ";
          cin >> alunos[i].nota[j];
          cin.ignore(80, '\n');
        }
      alunos[i].cmedia();
      cout << endl;
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
      cout << setw(41) << alunos[i].nome;
      cout << resetiosflags(ios::left);
      cout << setiosflags(ios::right);
      for (int j = 0; j <= 3; ++j)
        cout << setw(7) << alunos[i].nota[j];
      cout << setw(7) << alunos[i].media;
      cout << endl;
      media_gp += alunos[i].media;
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
