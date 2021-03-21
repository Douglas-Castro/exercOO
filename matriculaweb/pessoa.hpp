#ifndef PESSOA_HPP
#define PESSOA_HPP

#include<string>

using namespace std;

class Pessoa {
	private:
	  string nome;
	  string cpf;
	  string telefone;
	public:
	  Pessoa();
	  ~Pessoa();

	  string get_nome();
	  void set_nome(string nome);

	  string get_cpf();
	  void set_cpf(string cpf);

	  string get_telefone();
	  void set_telefone(string telefone);
};

#endif
