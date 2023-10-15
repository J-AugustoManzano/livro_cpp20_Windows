// C06EX16.CPP

#include <iostream>

using namespace std;

int soma(int a, int b)
{
  return a + b;
}

int subtracao(int a, int b)
{
  return a - b;
}

int (*operacao(char operador))(int, int)
{
  if (operador == '+')
    return soma;
  if (operador == '-')
    return subtracao;
  return nullptr;
}

int main(void)
{

  char operador;
  int a, b;

  cout << "Informe operador (+ ou -): ";
  cin >> operador;
  cin.ignore(80, '\n');

  int (*funcao)(int, int) = operacao(operador);

  if (operador == '+' or operador == '-')
    {

      cout << "Informe 1o. numero: ";
      cin >> a;
      cin.ignore(80, '\n');

      cout << "Informe 2o. numero: ";
      cin >> b;
      cin.ignore(80, '\n');

      cout << "Resultado: " << funcao(a, b) << endl;

    }
  else
    {
       cout << endl;
       cerr << "Operador invalido." << endl;
    }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
