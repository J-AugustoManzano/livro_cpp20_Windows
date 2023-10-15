// C07EX16.CPP

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct CadastroAluno
{
  char nome[41];
  float notas[4];
  float media;
};

CadastroAluno aluno[8], x;
float soma_nt, soma_md, media_gp;
char entranota[6];

int main(void)
{

  cout << setprecision(2) << fixed;

  cout << "Cadastro de alunos" << endl;
  cout << endl;

  for (int i = 0; i <= 7; ++i)
    {
      cout << "Entre " << setw(2) << i + 1 << "o. nome: ";
      cin.getline(aluno[i].nome, sizeof(aluno[i].nome));
      cout << endl;
      cout << "Entre as notas:" << endl;
      cout << endl;
      for (int j = 0; j <= 3; ++j)
        {
          cout << setw(2) << j + 1 << "a. nota: ";
          cin.getline(entranota, sizeof(entranota));
          aluno[i].notas[j] = atof(entranota);
        }
      cout << endl;
    }

  soma_md = 0;
  for (int i = 0; i <= 7; ++i)
    {
      soma_nt = 0;
      for (int j = 0; j <= 3; ++j)
        soma_nt += aluno[i].notas[j];
      aluno[i].media = soma_nt / 4;
      soma_md += aluno[i].media;
    }
  media_gp = soma_md / 8;

  for (int i = 0; i <= 6; ++i)
    for (int j = i + 1; j <= 7; ++j)
      if (strcmp(aluno[i].nome, aluno[j].nome) > 0)
        {
          x = aluno[i];
          aluno[i] = aluno[j];
          aluno[j] = x;
        }

  cout << endl;
  cout << "Relatorio Geral" << endl << endl;
  cout << setiosflags(ios::left);
  cout << setw(41) << "Aluno";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw(7) << "Nota1";
  cout << setw(7) << "Nota2";
  cout << setw(7) << "Nota3";
  cout << setw(7) << "Nota4";
  cout << setw(7) << "Media";
  cout << endl;
  cout << endl;
  for (int i = 0; i <= 7; ++i)
    {
      cout << resetiosflags(ios::right);
      cout << setiosflags(ios::left);
      cout << setw(41) << aluno[i].nome;
      cout << resetiosflags(ios::left);
      cout << setiosflags(ios::right);
      for (int j = 0; j <= 3; ++j)
        cout << setw(7) << aluno[i].notas[j];
      cout << setw(7) << aluno[i].media;
      cout << endl;
    }
  cout << endl;
  cout << setw(70) << "Media Geral = " << setw(6);
  cout << media_gp;
  cout << endl << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

