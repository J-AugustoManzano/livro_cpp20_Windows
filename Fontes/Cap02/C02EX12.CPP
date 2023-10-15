// C02EX12.CPP

#include <iostream>

using namespace std;

int main(void)
{
    bool X = true;

    cout << boolalpha;

    cout << "Valor X como verdadeiro ...: " << X << endl;

    X = false;
    cout << "Valor X como falso ........: " << X << endl;

    cout << noboolalpha;

    X = true;
    cout << "Valor X como verdadeiro ...: " << X << endl;

    X = false;
    cout << "Valor X como falso ........: " << X << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
