// C07EX14.CPP

#include <iostream>

using namespace std;

int main(void)
{

  char palavra[] = "Paralelepipedo";
  char *p = 0;

  p = palavra;

  while (*p != '\0')
  {
    cout << *p << endl;
    *p++;
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
