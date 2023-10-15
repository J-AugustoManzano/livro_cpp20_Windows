// C06EX13.CPP

#include <iostream>

using namespace std;

int main(void)
{

  const int x = 10;

  const int *px = &x;

  // Tentativa de modificar o valor da constante
  // resulta em erro de compilação
  // *px = 20; // Erro!

  cout << "Valor da constante x: " << x << endl;
  cout << "Valor apontado por px: " << *px << endl;

  int y = 5;

  int *const py = &y;

  *py = 15;

  cout << "Valor da variavel y: " << y << endl;
  cout << "Valor apontado por py: " << *py << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
