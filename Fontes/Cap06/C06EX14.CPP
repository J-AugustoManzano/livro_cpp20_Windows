// C06EX14.CPP

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

int main(void)
{

  int (*funcaoPont)(int, int);
  int resultado;

  funcaoPont = soma; // ou funcaoPont = &soma;
  resultado = funcaoPont(5, 2);
  cout << "Resultado soma .......: " << resultado << endl;

  funcaoPont = subtracao; // ou funcaoPont = &subtracao;
  resultado = funcaoPont(5, 2);
  cout << "Resultado subtracao ..: " << resultado << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
