#include <iostream>
#include <exception>
#include "excecao.hpp"

using namespace std;

void funcao_com_excecao(int tipo) {
  switch(tipo) {
      case 1:
        throw exception();
        break;
      case 2:
        throw Excecao("Erro: Função com problema");
        break;
      default:
        break;
  }
}

int main() {
  try {
    //funcao_com_excecao(1);
    funcao_com_excecao(2);
  }
  catch(Excecao &e) {
      cout << "Exceção: " << e.what() << endl;
  }
  catch(exception &e) {
    cout << "Exception: " << e.what() << endl;
  }


  return 0;
}
