//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Entrar com um número e imprimir uma das mensagens: é múltiplo
//de 3 ou não é múltiplo de 3.

#include <iostream>
#include "Multiplo3.hpp" // chamada da classe

using namespace std;

// método/função entrada de dados pelo usuário
void Multiplo3::entrada_usuario() {

	cout << endl;
	cout << "Verifique se o numero e multiplo de 3" << endl;
	cout << "Digite um numero: " << endl;
	cin >> numero;
}

// método/função condicão múltiplo
void Multiplo3::condicao_multiplo() {

	if (numero % 3 == 0) { // se o resto da divisão do número por 3 for igual a 0, significa que o número é múltiplo de 3
		cout << endl;
		cout.precision(2); // precisão de 2 casas decimais
		cout << fixed;
		cout << "O numero |" << numero << "| e multiplo de 3" << endl;
	}
	else {
		cout << endl;
		cout.precision(2); // precisão de 2 casas decimais
		cout << fixed;
		cout << "O numero |" << numero << "| nao e multiplo de 3" << endl;
	}
}
