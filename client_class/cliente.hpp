#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente {
private:
	//Atributos
	string nome;
	long long int cpf;
	string email;
	string telefone;
	string endereco;
	string genero;

public:
	//Métodos
	Cliente();	//Método construtor (instancia o objeto)
	~Cliente();	//Método destrutor (destrói o objeto)

	//Métodos Acessores
	string get_nome();
	void set_nome(string nome);
	
	long long int get_cpf();
	void set_cpf(long long int cpf);
	
	string get_email();
	void set_email(string email);
	
	string get_telefone();
	void set_telefone(string telefone);

	string get_endereco();
	void set_endereco(string endereco);

	string get_genero();
	void set_genero(string genero);

	//Outros Métodos
	void ligar();
	void imprimir_dados();

};

#endif
