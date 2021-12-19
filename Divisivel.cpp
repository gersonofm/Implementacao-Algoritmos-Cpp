//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Entrar com um número e informar se ele é divisível por 10, por 5,
//por 2 ou se não é divisível por nenhum destes.

#include <iostream>
#include "Divisivel.hpp" // chamada da classe

using namespace std;

// método/função entrada de dados pelo usuário
void Divisivel::entrada_usuario() {

	cout << endl;
	cout << "Digite um numero: " << endl;
	cin >> numero;
}

// método/função condição se é divisível
void Divisivel::condicao_divisivel() {

	if(numero % 10 == 0) { // se o resto da divisão do número por 10 for 0, o número é divisível por 10, 5 e 2
		cout << endl;
		cout << "O numero |" << numero << "| e divisivel por 10, por 5 e por 2." << endl;
		return;
	}

	if(numero % 5 == 0) { // se o resto da divisão do número por 5 for 0, o número é divisível por 5 mas não é divisível por 10 e 2
		cout << endl;
		cout << "O numero |" << numero << "| e divisivel por 5 mas nao e divisivel por 10 e por 2." << endl;
		return;
	}

	if (numero % 2 == 0) { // se o resto da divisão do número por 2 for 0, o número é divisível por 2 mas não é divisível por 10 e 5
		cout << endl;
		cout << "O numero |" << numero << "| e divisivel por 2 mas nao e divisivel por 10 e por 5." << endl;
		return;
	}

	cout << endl;
	cout << "O numero nao e divisivel por 10, por 5 e por 2." << endl;
}
