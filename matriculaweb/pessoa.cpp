#include "pessoa.hpp"
#include <iostream>

Pessoa::Pessoa() {
	nome = "";
	cpf = "000.000.000-00";
	telefone = "(00) 90000-0000";

	cout << "Construtor da classe Pessoa" << endl;
}

Pessoa::~Pessoa() {
	cout << "Destrutor da classe Pessoa" << endl;
}

string Pessoa::get_nome() {
	return nome;
}

void Pessoa::set_nome(string nome) {
	this-> nome = nome;
}

string Pessoa::get_cpf() {
	return cpf;
}

void Pessoa::set_cpf(string cpf) {
	this-> cpf = cpf; 
}

string Pessoa::get_telefone() {
	return telefone;
}

void Pessoa::set_telefone(string telefone) {
	this-> telefone = telefone;
}
