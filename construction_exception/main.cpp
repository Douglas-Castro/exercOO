#include <iostream>
#include "excecao.hpp"
#include "animal.hpp"

using namespace std;

int main() {
  try {
    Animal umAnimal("Cadela", "Lucas", "late");
    umAnimal.imprime();

    Animal outroAnimal("Gatinha", "Akemy", "mia");
    outroAnimal.imprime();

    Animal quartoAnimal(umAnimal);
    quartoAnimal.imprime();

    quartoAnimal = outroAnimal;
    quartoAnimal.imprime();

    Animal terceiroAnimal("", "", "ronca");
    terceiroAnimal.imprime();
  }
  catch(Excecao &e) {
    cout << e.what() << endl;
  }

  return 0;
}
