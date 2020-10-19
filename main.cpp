#include "Empregado.hpp"
#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro eng1;
  eng1.set_nome("Joao Snow");
  eng1.set_salarioHora(35);
  eng1.set_projetos(3); 
  eng1.set_horasTrabalhadas(9.5);
  eng1.print_atrib();
  
  Engenheiro eng2;
  eng2.set_nome("Daniela Targaryen");
  eng2.set_salarioHora(30);
  eng2.set_projetos(1);
  eng2.set_horasTrabalhadas(8);
  eng2.print_atrib();
  
  Engenheiro eng3;
  eng3.set_nome("Bruno Stark");
  eng3.set_salarioHora(30);
  eng3.set_projetos(2); 
  eng3.set_horasTrabalhadas(8);
  eng3.print_atrib();
  
  Vendedor vend1;
  vend1.set_nome("Tonho Lannister");
  vend1.set_salarioHora(20);
  vend1.set_quotaMensalVendas(5000);
  vend1.set_horasTrabalhadas(6);
  vend1.print_atrib(); 
  
  Vendedor vend2;
  vend2.set_nome("Jose Mormont");
  vend2.set_salarioHora(25);
  vend2.set_quotaMensalVendas(3000);
  vend2.set_horasTrabalhadas(8);
  vend2.print_atrib();
  
  Vendedor vend3;
  vend3.set_nome("Sonia Stark");
  vend3.set_salarioHora(30);
  vend3.set_quotaMensalVendas(4000);
  vend3.set_horasTrabalhadas(8);
  vend3.print_atrib();
  
  return 0;	
}