// ESCOLA.H (suporte para programa C08EX13)
// Arquivo de cabecalho para as classes Escolar e Aluno

#ifndef __ESCOLA_H
#define __ESCOLA_H

#include <string>

class Escolar
{
public:
  int sala;
  int serie;
};

class Aluno : public Escolar
{
  public:
    std::string nome;
    float nota[4];
    float media;

    float cmedia(void)
    {
      media = 0;
      for (int i = 0; i < 4; i++)
        media += nota[i];
      media /= 4;
      return media;
    }
};

#endif // __ESCOLA_H
