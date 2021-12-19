//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 15 de dezembro de 2021
//
//Fa�a um programa em C++ imprimir (escrever na tela) todos
//os n�meros de 100 at� 1.

#include <iostream>
#include "ContagemNumeros.hpp" // chamada da classe

using namespace std;

// m�todo/fun��o do la�o de repeti��o
void ContagemNumeros::laco_repeticao() {

	for (i; i >= limite; i--) {
		cout << endl;
		cout << " |" << i << "|";
	}
	cout << endl;
}
