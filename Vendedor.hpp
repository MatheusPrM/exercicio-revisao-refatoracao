#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {	

  private:
    double _quotaMensalVendas;
    int _totalMeses = 12;
  

  public:
    void set_quotaMensalVendas(double quotaMensalVendas);

    double get_quotaMensalVendas() const;

    int get_totalMeses() const;

    double quotaTotalAnual() const;

    void print_atrib() const;


};

#endif

