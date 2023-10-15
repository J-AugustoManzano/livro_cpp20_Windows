// C06EX15.CPP

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

int operacao(int (*funcao)(int, int), int a, int b)
{
  return funcao(a, b);
}

int main(void)
{

  int resultado1 = operacao(soma, 5, 2);
  int resultado2 = operacao(subtracao, 5, 2);

  cout << "Resultado soma .......: " << resultado1 << endl;
  cout << "Resultado subtracao ..: " << resultado2 << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
