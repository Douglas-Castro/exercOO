#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>
#include "pessoa.hpp"

using namespace std;

class Aluno : public Pessoa {
	private:
	   long long int matricula;
	   string curso;
	   float ira;

	public:
	   Aluno();
	   
	   Aluno(string nome, string cpf, string telefone, long long matricula, string curso);

	   Aluno(string nome);

	   ~Aluno();

	   long long int get_matricula();
	   void set_matricula(long long int matricula);

	   string get_curso();
	   void set_curso(string curso);

	   float get_ira();
	   void set_ira(float ira);

	   void imprimir_dados();


};

#endif

