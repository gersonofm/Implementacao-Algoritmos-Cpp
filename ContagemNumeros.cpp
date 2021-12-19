//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Faça um programa em C++ imprimir (escrever na tela) todos
//os números de 100 até 1.

#include <iostream>
#include "ContagemNumeros.hpp" // chamada da classe

using namespace std;

// método/função do laço de repetição
void ContagemNumeros::laco_repeticao() {

	for (i; i >= limite; i--) {
		cout << endl;
		cout << " |" << i << "|";
	}
	cout << endl;
}
