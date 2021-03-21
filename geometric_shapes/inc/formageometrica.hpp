#ifndef FORMAGEOMETRICA_HPP
#define FORMAGEOMETRICA_HPP

#include <string>

using namespace std;

class FormaGeometrica {
   protected:
   //private:
      string tipo;
      int lados;
      float base;
      float altura;
   public:
      FormaGeometrica();
      FormaGeometrica(string tipo, int lados, float base, float altura);
      string getTipo();
      void setTipo(string tipo);
      int getLados();
      void setLados(int lados);
      float getBase();
      void setBase(float base);
      float getAltura();
      void setAltura(float altura);

      // Utilize o virtual para definir que os métodos sobrescritos 
      // das classes filha tenham prioridade perante os métodos da classe pai.

      // Ao declara um método como virtual e "= 0", define-se a classe como Abstrata
      // não sendo possível instanciar um objeto da mesma. 
      // virtual float calculaArea() = 0;

      virtual float calculaArea();
      virtual float calculaPerimetro();

};

#endif
