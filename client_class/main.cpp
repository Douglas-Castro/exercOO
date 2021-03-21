#include <iostream>
#include "cliente.hpp"

void configura_cliente(Cliente *cliente, string nome, long long int cpf, string email, string telefone, string endereco, string genero) {
	cliente->set_nome(nome);
	cliente->set_cpf(cpf);	
	cliente->set_email(email);
	cliente->set_telefone(telefone);
	cliente->set_endereco(endereco);
	cliente->set_genero(genero);
}

int main(int argc, char ** argv) {
	
	Cliente cliente1;
	Cliente cliente2;

	Cliente * cliente3;
	cliente3 = new Cliente();

	Cliente * cliente4 = new Cliente();

	cliente3->set_nome("Douglas");
	configura_cliente(cliente3, "Douglas", 74974640127, "farias.douglascastro@gmail.com", "99610-9408", "Gama", "Masculino");

	configura_cliente(&cliente1, "joao", 58725987428, "joao@email.com", "95555-4444", "Rua 1, Casa 2", "Masculino");

	configura_cliente(&cliente2, "maria", 886235988728, "maria@email.com", "93333-2222", "Rua 3, Casa 4", "Feminino");

	cliente1.ligar();

	cliente1.imprimir_dados();

	cliente2.ligar();

	cliente2.imprimir_dados();

	cliente3->ligar();

	cliente3->imprimir_dados();

	delete cliente3;
	delete cliente4;

	return 0;
}
