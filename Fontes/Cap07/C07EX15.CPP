// C07EX15.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void)
{

  string palavra = "Paralelepipedo";
  char *p = &palavra[0];

  while (*p != '\0')
    {
      cout << *p << endl;
      p++;
    }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
