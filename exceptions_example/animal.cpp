#include <iostream>

#include "excecao.hpp"
#include "animal.hpp"

using namespace std;

Animal::Animal(string tipo, string nome, string som) : tipo(tipo), nome(nome), som(som) {
  if(tipo.length() == 0 || nome.length() == 0 || som.length() == 0) {
    throw Excecao("Parâmetros inválidos");
  }
}

Animal::Animal(const Animal & a) {
  this->nome = a.nome;
  this->tipo = a.tipo;
  this->som = a.som;
}

Animal & Animal::operador = (const Animal & a) {
  if(this != &a) {
    this->nome = a.nome;
    this->tipo = a.tipo;
    this->som = a.som;
  }
  return *this;
}

void Animal::imprime() {
  cout << "O " << tipo << " " << nome << " " << som << endl;
}
