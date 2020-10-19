#include "Vendedor.hpp"

void Vendedor::set_quotaMensalVendas(double quotaMensalVendas) {
	this->_quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::get_quotaMensalVendas() const { 
	return this->_quotaMensalVendas; 
}

int Vendedor::get_totalMeses() const {
  return this->_totalMeses;
}

double Vendedor::quotaTotalAnual() const {
	double Mensal = get_quotaMensalVendas();
  return (Mensal * get_totalMeses());
}

void Vendedor::print_atrib() const {
  std::cout << "Nome: " << get_nome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(get_horasTrabalhadas()) << std::endl;  
  std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
}