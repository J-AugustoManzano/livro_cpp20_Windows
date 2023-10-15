// DATA.H
// Cabecalho para controle de datas

#pragma once

class Data
{
  private:
    short dia, mes, ano;
    bool dataOk;

  public:
    enum { FEVEREIRO = 2, JULHO = 7 };

    bool anoBissexto(void) const;
    char ultimoDiaNoMes(void) const;
    void validaData(void);
    void alteraData(short d, short m, short a);
    void mostraData(void) const;
    Data();
};
