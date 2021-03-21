#include "formageometrica.hpp"
#include "retangulo.hpp"
#include "triangulo.hpp"
#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

	FormaGeometrica * forma1 = new FormaGeometrica();
	FormaGeometrica * forma2 = new FormaGeometrica("Quadrado", 4, 7.0, 7.0);

	Triangulo * forma3 = new Triangulo(3.5, 4);
	Retangulo * forma4 = new Retangulo(11.0, 12.0);
/*
	cout << "Forma: " << forma1->getTipo() 
	<< " Área: " << forma1->calculaArea() << endl;

	cout << "Forma: " << forma2->getTipo() 
	<< " Área: " << forma2->calculaArea() << endl;

	cout << "Forma: " << forma3->getTipo() 
	<< " Área: " << forma3->calculaArea() << endl;

	cout << "Forma: " << forma4->getTipo() 
	<< " Área: " << forma4->calculaArea() << endl;	
*/
	FormaGeometrica *lista_de_formas[10];

	lista_de_formas[0] = forma1;
	lista_de_formas[1] = forma2;
	lista_de_formas[2] = forma3;
	lista_de_formas[3] = forma4;

	for(int i = 0; i < 4; i++) {
		cout << "Forma: " << lista_de_formas[i]->getTipo() 
		<< " Área: " << lista_de_formas[i]->calculaArea() 
		<< " Perímetro: " << lista_de_formas[i]->calculaPerimetro() << endl;
	}


	return 0;
}