// C08EX10.CPP

#include <iostream>

using namespace std;

class Funcionario
{
  protected:
    string nome;
    double salario;

  public:
    Funcionario(const string &nome, double salario)
      : nome(nome), salario(salario) {}

    virtual void calcularSalario(void)
    {
      cout << "Salario de " << nome;
      cout << ": R$ " << salario << endl;
    }

    virtual ~Funcionario() {}
};

class Gerente : public Funcionario
{
  private:
    double bonus;

  public:
    Gerente(const string &nome, double salario, double bonus)
      : Funcionario(nome, salario), bonus(bonus) {}

    void calcularSalario(void) override
    {
      double salarioTotal = salario + bonus;
      cout << "Salario de " << nome;
      cout << " (Gerente): R$ " << salarioTotal << endl;
    }
};

int main(void)
{

  Funcionario* func1 = new Funcionario("Alice", 4000.0);
  Funcionario* func2 = new Gerente("Bob", 6000.0, 2000.0);

  func1->calcularSalario(); // Chama versao classe base.
  func2->calcularSalario(); // Chama versao classe derivada.

  delete func1;
  delete func2;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
