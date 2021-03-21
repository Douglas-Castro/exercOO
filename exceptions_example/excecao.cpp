#include "excecao.hpp"

using namespace std;

const char * Excecao::what() const throw() {
    return mensagem;
}
