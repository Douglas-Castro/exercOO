#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

using namespace std;

class Animal {
  private:
    string tipo;
    string nome;
    string som;
    Animal();

  public:
    Animal(string tipo, string nome, string som);
    Animal(const Animal &); // Construtor de cópia
    Animal & operator=(const Animal &); // Operador de cópia
    void imprime();
};

#endif
