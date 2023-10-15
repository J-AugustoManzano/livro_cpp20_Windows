// C07EX17.CPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct CadastroAluno
{
  string nome;
  float notas[4];
  float media;
};

int main(void)
{

  int tamanho;
  float soma_nt, soma_md, media_gp;
  char entranota[6], quant[15];
  CadastroAluno *pivo, *aluno, *pi, *pj, x;

  cout << setprecision(2) << fixed;

  cout << "Cadastro de alunos" << endl << endl;

  cout << "Entre a quantidade de elementos: ";
  cin.getline(quant, sizeof(quant));
  tamanho = atoi(quant);

  pivo = new CadastroAluno[sizeof(CadastroAluno) * tamanho];

  // Entrada dos dados escolares
  aluno = pivo;
  cout << endl;
  for (int i = 0; i <= tamanho - 1; ++i)
  {
    cout << "Entre " << setw(2) << i + 1 << "o. nome: ";
    getline(cin, aluno->nome);
    cout << endl;
    cout << "Entre as notas:\n" << endl;
    for (int j = 0; j <= 3; ++j)
    {
      cout << setw(2) << j + 1 << "a. nota: ";
      cin.getline(entranota, sizeof(entranota) - 1);
      aluno->notas[j] = atof(entranota);
    }
    cout << endl;
    aluno++;
  }

  // Processamento do calculo das medias
  aluno = pivo;
  soma_md = 0;
  for (int i = 0; i <= tamanho - 1; ++i)
  {
    soma_nt = 0;
    for (int j = 0; j <= 3; ++j)
      soma_nt = soma_nt + aluno->notas[j];
    aluno->media = soma_nt / 4;
    soma_md = soma_md + aluno->media;
    aluno++;
  }
  media_gp = soma_md / tamanho;

  // Classificação dos dados
  pi = pivo;
  for (int i = 0; i <= tamanho - 2; ++i)
  {
    pj = pi;
    pj++;
    for (int j = i + 1; j <= tamanho - 1; ++j)
    {
      if (pi->nome[0] > pj->nome[0])
      {
        x = *pi;
        *pi = *pj;
        *pj = x;
      }
      pj++;
    }
    pi++;
  }

  // Apresentacao dos dados escolares
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
  aluno = pivo;
  for (int i = 0; i <= tamanho - 1; ++i)
  {
    cout << resetiosflags(ios::right);
    cout << setiosflags(ios::left);
    cout << setw(41) << aluno->nome[0];
    cout << resetiosflags(ios::left);
    cout << setiosflags(ios::right);
    for (int j = 0; j <= 3; ++j)
      cout << setw(7) << aluno->notas[j];
    cout << setw(7) << aluno->media;
    cout << endl;
    aluno++;
  }

  cout << endl;
  cout << setw(70) << "Media Geral = " << setw(6);
  cout << media_gp << endl;
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
