// C07EX25.CPP

#include <iostream>
#include <string>

using namespace std;

typedef int ProdutoID;
typedef string NomeProduto;
typedef float PrecoProduto;

struct Produto
{
  ProdutoID id;
  NomeProduto nome;
  PrecoProduto preco;
};

int main(void)
{

  Produto p1;
  p1.id = 101;
  p1.nome = "Camiseta";
  p1.preco = 29.99;

  cout << "Informacoes do Produto:" << endl;
  cout << "ID .......: " << p1.id << endl;
  cout << "Nome .....: " << p1.nome << endl;
  cout << "Preço $ ..: " << p1.preco << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
