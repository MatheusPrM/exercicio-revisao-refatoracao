#include "Empregado.hpp"

void Empregado::set_salarioHora(double salarioHora) {
	this->_salarioHora = salarioHora;
}

void Empregado::set_nome(std::string nome) {
	this->_nome = nome;
}

void Empregado::set_horasTrabalhadas(double horasTrabalhadas) {
  this->_horasTrabalhadas = horasTrabalhadas;
}

double Empregado::get_salarioHora() const { 
	return this->_salarioHora; 
}

std::string Empregado::get_nome() const { 
	return this->_nome; 
}

double Empregado::get_horasTrabalhadas() const {
  return this->_horasTrabalhadas;
}

int Empregado::get_limiteHoras() const {
  return this->_limiteHoras;
}

double Empregado::pagamentoMes(double _horasTrabalhadas) const {
  double _t = _horasTrabalhadas;
  //Cálculo de hora extra (+50% se horasTrabalhadas > _limiteHoras)
  if (_horasTrabalhadas > get_limiteHoras()) {
    double x = _horasTrabalhadas - get_limiteHoras();
    _t += x / 2;
  }
  return (_t * get_salarioHora());
}