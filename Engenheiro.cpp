#include "Engenheiro.hpp"

void Engenheiro::set_projetos(int projetos) {
  this->_projetos = projetos;
}

int Engenheiro::get_projetos() const {
  return this->_projetos;
}

void Engenheiro::print_atrib() const {
  std::cout << "Nome: " << get_nome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(get_horasTrabalhadas()) << std::endl;
  std::cout << "Projetos: " << get_projetos() << std::endl;
  std::cout << std::endl;
}