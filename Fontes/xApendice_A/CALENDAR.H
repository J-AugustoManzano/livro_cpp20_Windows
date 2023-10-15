// CALENDAR.H
// Cabecalho para controle de calendario

#include <iostream>
#include <string>
#include <cmath>

//Definicao de tipos personalizados
typedef unsigned long int ulInt;

template <typename NovoTipo, typename TipoAntigo>
NovoTipo casting(TipoAntigo base)
{
  return static_cast<NovoTipo>(base);
}

// Funcionalidades operacionais
bool dataValidaFormato(const std::string &data)
{
  if (data.length() != 10)
    return false;

  if (data[2] != '/' or data[5] != '/')
    return false;

  for (int i = 0; i <= 9; i++) {
    if (i == 2 or i == 5)
      continue;
    if (not std::isdigit(data[i]))
      return false;
  }

  return true;
}

short pegaDia(std::string dt)
{
  return std::stoi(dt.substr(0, 2));
}

short pegaMes(std::string dt)
{
  return std::stoi(dt.substr(3, 2));
}

short pegaAno(std::string dt)
{
  return std::stoi(dt.substr(6, 4));
}

bool anoBissexto(std::string dt)
{
  int ano {pegaAno(dt)};

  return
  (
    (ano % 400 == 0) or
    (ano % 4 == 0 and ano % 100 != 0)
  );
}

short ultimoDiaNoMes(std::string dt)
{
  int mes {pegaMes(dt)};
  int ano {pegaAno(dt)};

  if (mes == 2)
    return (anoBissexto(dt)) ? 29 : 28;

  if (mes == 4 or mes == 6 or mes == 9 or mes == 11)
    return 30;

  return 31;
}

bool validaData(std::string dt)
{
  int dia {pegaDia(dt)};
  int mes {pegaMes(dt)};
  int ano {pegaAno(dt)};

  return (ano >=    1) and
         (ano <= 9999) and
         (mes >=    1) and
         (mes <=   12) and
         (dia >=    1) and
         (dia <= ultimoDiaNoMes(dt)) and
          not ((ano == 1582) and
               (mes ==   10) and
               (dia >=    5) and
               (dia <=   14));
}

ulInt dataANSI(std::string dt)
{
  std::string data;
  data.reserve(11);

  for (char caractere : dt)
    if (std::isdigit(caractere))
      data.push_back(caractere);

    data = data.substr(4, 4) +
           data.substr(2, 2) +
           data.substr(0, 2);

  return std::stoul(data);
}

ulInt dataParaJuliano(std::string dt)
{
  float a, b, c, d, e;
  ulInt j;

  short dia {pegaDia(dt)};
  short mes {pegaMes(dt)};
  short ano {pegaAno(dt)};
  ulInt data {dataANSI(dt)};

  if (mes < 3)
    {
      ano = ano - 1;
      mes = mes + 12;
    }

  if (data >= 15821015) // 15/10/1582
    {
      a = casting<ulInt>(ano / 100);
      b = casting<ulInt>(a / 4);
      c = 2 - a + b;
    }
  if (data <= 15821004) // 04/10/1582
    c = 0;

  d = casting<ulInt>(365.25 * (ano + 4716));
  e = casting<ulInt>(30.6001 * (mes + 1));
  j = casting<ulInt>(d + e + dia + 0.5 + c - 1524.5);

  return j;
}

std::string julianoParaData(ulInt dj)
{
  char buffer[11];
  float a, d, e, f, g, h, i, j, k, l, m;

  a = casting<float>(dj);

  if (a < casting<float>(2299161))
    d = a;

  if (a > casting<float>(2299160))
    {
      e = casting<ulInt>((a - 1867216.25) / 36524.25);
      d = a + 1 + e - casting<ulInt>(e / 4);
    }

  f = d + 1524;
  g = casting<ulInt>((f - 122.1) / 365.25);
  h = casting<ulInt>(g * 365.25);
  i = casting<ulInt>((f - h) / 30.6001);
  j = f - h - casting<ulInt>(i * 30.6001);

  if (i < 14)
    k = i - 1;

  if (i > 13)
    k = i - 13;

  if (k > 2)
    l = g - 4716;

  if (k < 3)
    l = g - 4715;

  if (l > 0)
    m = l;

  if (l < 1)
    m = l * (-1) + 1;

  snprintf(buffer, 11, "%02.f/%02.f/%04.f", j, k, m);

  return std::string(buffer);
}

short diaDaSemana(std::string dt)
{
  return casting<short>
    ((dataParaJuliano(dt) + 2) % 7);
}

std::string diaDaSemanaPorExtenso(std::string dt,
                                  std::string idioma)
{
  short ds = diaDaSemana(dt) - 1;

  std::string diasSemanaPt[] = {
    "Domingo",
    "Segunda-feira",
    "Terca-feira",
    "Quarta-feira",
    "Quinta-feira",
    "Sexta-feira",
    "Sabado"
  };

  std::string diasSemanaEs[] = {
    "Domingo",
    "Lunes",
    "Martes",
    "Miercoles",
    "Jueves",
    "Viernes",
    "Sabado"
  };

  std::string diasSemanaEn[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
  };

  std::string diaDaSemana;

  if (idioma == "pt" and ds >= 0 and ds < 7)
    diaDaSemana = diasSemanaPt[ds];
  else if (idioma == "es" and ds >= 0 and ds < 7)
    diaDaSemana = diasSemanaEs[ds];
  else if (idioma == "en" and ds >= 0 and ds < 7)
    diaDaSemana = diasSemanaEn[ds];
  else
    diaDaSemana = "Idioma nao suportado";

  return diaDaSemana;
}
