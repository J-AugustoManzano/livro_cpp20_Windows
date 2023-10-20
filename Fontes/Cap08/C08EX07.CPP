// C08EX07.CPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

class Sala
{
  protected:
    int sala;

  public:
    Sala(void)
      {
        cout << "Construtor: Inicializa classe Sala" << endl;
      }
    ~Sala(void)
      {
        cout << "Destrutor: Libera memoria classe Sala";
        cout << endl;
      }
};

class Aluno : public Sala
{
  private:
    float nota[4];
    float media;

  public:
    Aluno(void);
    ~Aluno(void);
    string nome;
    void PoeSala(const char SL[3]);
    int PegaSala(void);
    void PoeNota(const char NT[6], int pos);
    float PegaNota(int pos);
    float PoeMedia(void);
    float PegaMedia(void);
};

Aluno::Aluno(void)
{
  cout << "Construtor: Inicializa classe Aluno" << endl;
}

Aluno::~Aluno(void)
{
  cout << "Destrutor: Libera memoria classe Aluno" << endl;
}

float Aluno::PoeMedia(void)
{
  media = 0;
  for (int i = 0; i < 4; i++)
    media += nota[i];
  media /= 4;
  return media;
}

float Aluno::PegaNota(int pos)
{
  return nota[pos];
}

void Aluno::PoeNota(const char NT[6], int pos)
{
  nota[pos] = atof(NT);
}

float Aluno::PegaMedia(void)
{
  return media;
}

int Aluno::PegaSala(void)
{
  return sala;
}

void Aluno::PoeSala(const char SL[3])
{
  sala = atoi(SL);
}

int main(void)
{

  Aluno aluno;
  char entradaNota[6], entradaSala[3];

  cout << setprecision(2) << fixed;

  // Rotina para a entrada dos dados
  cout << "Cadastro de aluno" << endl;
  cout << endl;

  cout << "Informe o nome.....: ";
  cin >> aluno.nome;

  cout << "Informe a sala.....: ";
  cin.ignore(80, '\n');
  cin.getline(entradaSala, sizeof(entradaSala));
  aluno.PoeSala(entradaSala);
  cout << endl;

  cout << "Informe as notas:" << endl;
  cout << endl;
  for (int i = 0; i <= 3; ++i)
  {
    cout << setw(2) << i + 1 << "a. nota..........: ";
    cin.getline(entradaNota, sizeof(entradaNota));
    aluno.PoeNota(entradaNota, i);
  }
  cout << endl;
  aluno.PoeMedia();

  // Apresentacao dos dados
  cout << endl;
  cout << "Relatorio" << endl;
  cout << endl;
  cout << "Nome..........: " << aluno.nome << endl;
  cout << "Sala..........: " << aluno.PegaSala() << endl;
  cout << endl;
  for (int i = 0; i <= 3; ++i)
  {
    cout << setw(2) << i + 1 << "a. nota.....: ";
    cout << setw(5) << aluno.PegaNota(i) << endl;
  }
  cout << endl;
  cout << "Media.........: ";
  cout << setw(5) << aluno.PegaMedia() << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
