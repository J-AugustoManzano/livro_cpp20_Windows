// C05EX20.CPP

#include <iostream>

using namespace std;

int VALOR = 3;

namespace escopo1
{
  int VALOR = 2;
  namespace escopo2
  {
    int VALOR = 1;
  }
}

int main(void)
{

  int VALOR = 4;

  cout << VALOR << endl;
  cout << ::VALOR << endl;
  cout << escopo1::VALOR << endl;
  cout << escopo1::escopo2::VALOR << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
