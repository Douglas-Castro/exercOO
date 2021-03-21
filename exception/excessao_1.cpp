#include <iostream>

using namespace std;

int testValor(int valor) {
	if(valor < -15) {
		throw (5.1); // Gera exceção do tipo double
	}else if(valor < -10){
		throw (5.2f); // Gera exceção do tipo float
	}else if(valor < -5) {
		throw('a'); // Gera exceção do tipo char
	} else if (valor < 0) {
		throw(1); // Gera exceção do tipo int
	}else
		return valor*2;

}

int main() {
	int valor, valor_resultante;

	cout << "Insira o valor: ";
	cin >> valor;

	try {
		valor_resultante = testValor(valor);
		cout << "Valor = " << valor_resultante << endl;
	}
	catch(int e) {
		cout << "Exceção do tipo INT: valor menor que 0!" << endl;
	}
	catch (char e) {
		cout << "Exceção do tipo CHAR: valor menor que -5!" << endl;
	}
	catch (float e) {
		cout << "Exceção do tipo FLOAT: valor menor que -10 " << endl;
	}
	catch (double e) {
			cout << "Exceção do tipo DOUBLE: valor menor que -15 " << endl;
	}
	catch(...) {
		cout << "Exceção genérica!" << endl;
	}

	return 0;
}
