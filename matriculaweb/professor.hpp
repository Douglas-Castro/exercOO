#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include "pessoa.hpp"
#include <string>

using namespace std;

class Professor : public Pessoa {
	private:
	  float salario;
  	  string formacao;

	public:
	  Professor();
	  Professor(string nome, string telefone, string cpf, float salario, string formacao);
	  ~Professor();
	  float get_salario();
	  void set_salario(float salario);
	  string get_formacao();
	  void set_formacao(string formacao);
};

#endif 
