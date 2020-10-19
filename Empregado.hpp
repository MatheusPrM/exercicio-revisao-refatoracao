#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    double _salarioHora;
		std::string _nome;
		double _horasTrabalhadas;
		int _limiteHoras = 8;

	public:
		void set_salarioHora(double salarioHora);

		void set_nome(std::string nome);

		void set_horasTrabalhadas(double horasTrabalhadas);

		double get_salarioHora() const;

		std::string get_nome() const;

		double get_horasTrabalhadas() const;

		int get_limiteHoras() const;

		double pagamentoMes(double _horasTrabalhadas) const;


};

#endif