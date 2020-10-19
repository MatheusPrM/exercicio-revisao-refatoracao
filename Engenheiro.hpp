#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:  
	  int _projetos;


  public:  
    void set_projetos(int projetos);

    int get_projetos() const;

    void print_atrib() const;


};

#endif