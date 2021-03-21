#include "cliente.hpp"
#include <iostream>
#include <string>

using namespace std;

Cliente::Cliente() {
	cout << "Cliente criado!" << endl;
	nome = "";
	cpf = 0;
	telefone = "0000";
	email = "";
	endereco = "";
	genero = "";
}

Cliente::~Cliente() {
	cout << "Cliente destruído" << endl;
}

string Cliente::get_nome() {
	return nome;
}

void Cliente::set_nome(string nome) {
	this->nome = nome;
}

long long int Cliente::get_cpf() {
	return cpf;
}

void Cliente::set_cpf(long long int cpf) {
	this->cpf = cpf;
}

string Cliente::get_email() {
	return email;
}

void Cliente::set_email(string email) {
	this->email = email;
}

string Cliente::get_telefone() {
	return telefone;
}

void Cliente::set_telefone(string telefone) {
	this->telefone = telefone;
}

string Cliente::get_endereco() {
	return endereco;
}

void Cliente::set_endereco(string endereco) {
	this->endereco = endereco;
}

string Cliente::get_genero() {
	return genero;
}

void Cliente::set_genero(string genero) {
	this->genero = genero;
}

void Cliente::ligar(){
	cout << "Ligando para: " << nome << " no telefone " << telefone << endl;
}

void Cliente::imprimir_dados(){
	cout << "Nome: " << get_nome() << endl;
        cout << "CPF: " << get_cpf() << endl;
        cout << "E-mail: " << get_email() << endl;
        cout << "Telefone: " << get_telefone() << endl;
        cout << "Endereço: " << get_endereco() << endl;
        cout << "Gênero: " << get_genero() << endl;
}

