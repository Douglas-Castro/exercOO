#ifndef EXCECAO_HPP
#define EXCECAO_HPP

#include <exception>

using namespace std;

class Excecao : public exception {
  private:
    const char * mensagem;
    Excecao() {}; // esse objeto nunca poderá ser criado dessa forma, força o objeto ser criadp só da forma dos construtores públicos

  public:
    Excecao(const char * s) throw() : mensagem(s) {};
    const char * what() const throw();
  };

#endif
