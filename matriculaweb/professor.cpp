#include "professor.hpp"

Professor::Professor(){
	set_nome("");
	set_telefone("0000");
	set_cpf("000.000.000-00");
	set_salario(0.0f);
	set_formacao("");
}

Professor::Professor(string nome, string telefone, string cpf, float salario, string formacao) {
	set_nome(nome);
	set_telefone(telefone);
	set_cpf(cpf);
	set_salario(salario);
	set_formacao(formacao);
}


