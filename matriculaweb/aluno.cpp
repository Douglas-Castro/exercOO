#include "aluno.hpp"
#include <iostream>

using namespace std;

Aluno::Aluno() {
	set_nome("");
	set_cpf("000.000.000-00");
	set_telefone("(00) 90000-0000");
	set_matricula(0);
	set_curso("Engenharias");
	set_ira(5.0f);
	
	cout << "Construtor da classe Aluno" << endl;
}

Aluno::Aluno(string nome, string cpf, string telefone, long long int matricula, string curso) {
	set_nome(nome);
	set_cpf(cpf);
	set_telefone(telefone);
	set_matricula(matricula);
	set_curso(curso);
	set_ira(5.0f);

	cout << "Construtor sobrecarregado da Classe Aluno" << endl;
}

Aluno::Aluno(string nome) {	
	set_nome(nome);
	set_cpf("000.000.000-00");
	set_telefone("(00) 90000-0000");
	set_matricula(0);
	set_curso("Engenharias");
	set_ira(5.0f);

	cout << "Construtor sobrecarregado 2 da classe Aluno" << endl;
}

Aluno::~Aluno() {
	cout << "Destrutor da classe Aluno" << endl;
}

long long int Aluno::get_matricula() {
	return matricula;
}
void Aluno::set_matricula(long long int matricula) {
	this-> matricula = matricula;
}

string Aluno::get_curso() {
	return curso;
}
void Aluno::set_curso(string curso) {
	this-> curso = curso;
}

float Aluno::get_ira() {
	return ira;
}
void Aluno::set_ira(float ira) {
	this-> ira = ira;
}

void Aluno::imprimir_dados() {
	cout << "Nome: " << get_nome() << endl;	
	cout << "CPF: " << get_cpf() << endl;
	cout << "Telefone: " << get_telefone() << endl;
	cout << "Matricula: " << get_matricula() << endl;
	cout << "Curso: " << get_curso() << endl;
	cout << "IRA: " << get_ira() << endl;
}
