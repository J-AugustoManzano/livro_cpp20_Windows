// C05EX06.CPP
// Soma e verificacao de paridade

#include <iostream>
using namespace std;

void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

int somax(int a, int b, string &mensagem)
{
  if (a % 2 == 0 and b % 2 == 0)
    mensagem = "Os valores fornecidos sao pares";
  else if (a % 2 != 0 and b % 2 != 0)
    mensagem = "Os valores fornecidos sao impares";
  else
    mensagem = "Os valores fornecidos sao mistos";
  return a + b;
}

int main(void)
{
  int v1, v2;
  string m;

  cout << "Entre o primeiro valor .: "; cin >> v1;
  cin.ignore(80, '\n');

  cout << "Entre o segundo valor ..: "; cin >> v2;
  cin.ignore(80, '\n');

  cout << "Resultado da soma ......: " << somax(v1, v2, m);
  cout << endl;
  cout << "Status dos valores .....: " << m;
  cout << endl;

  pausa();
  return 0;
}
