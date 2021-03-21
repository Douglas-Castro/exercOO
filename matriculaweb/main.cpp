#include <iostream>
#include "pessoa.hpp"
#include "aluno.hpp"

using namespace std;

int main(int argc, char ** argv) {
	Pessoa pessoa1;
	Pessoa * pessoa2 = new Pessoa();

	pessoa1.set_nome("Lina Pereira");
	pessoa1.set_cpf("246.265.355-58");
	pessoa1.set_telefone("(61) 95867-6958");

	cout << "Nome: " << pessoa1.get_nome() << endl;
	cout << "CPF: " << pessoa1.get_cpf() << endl;
	cout << "Telefone: " << pessoa1.get_telefone() << endl;

	delete pessoa2;

	cout << endl << "Teste da Classe Aluno" << endl << endl;

	Aluno aluno1;

	aluno1.set_nome("Jup");
	aluno1.set_telefone("(61) 95555-6666");
	aluno1.set_cpf("222.666.444-87");
	aluno1.set_matricula(170158974);
	aluno1.set_curso("Engenharia de Software");
	aluno1.set_ira(4.5);

	aluno1.imprimir_dados();

	cout << endl << "Teste Sobrecarga de métodos da classe Aluno" << endl << endl;

	Aluno aluno2;
	Aluno aluno3("Bruno", "365.365.365-98", "(62) 95555-8888", 170140581, "Eng. Eletrônica");
	Aluno * aluno4 = new Aluno("Marcela", "999.999.999-68", "(62) 98888-9999", 17014528, "Eng. Aeroespacial");
	Aluno * aluno5 = new Aluno("Badsista");

	aluno2.imprimir_dados();
	aluno3.imprimir_dados();
	aluno4->imprimir_dados();
	aluno5->imprimir_dados();

	delete aluno4;
	delete aluno5;

	return 0;
}
