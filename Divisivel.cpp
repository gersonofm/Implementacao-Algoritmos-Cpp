//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 15 de dezembro de 2021
//
//Entrar com um n�mero e informar se ele � divis�vel por 10, por 5,
//por 2 ou se n�o � divis�vel por nenhum destes.

#include <iostream>
#include "Divisivel.hpp" // chamada da classe

using namespace std;

// m�todo/fun��o entrada de dados pelo usu�rio
void Divisivel::entrada_usuario() {

	cout << endl;
	cout << "Digite um numero: " << endl;
	cin >> numero;
}

// m�todo/fun��o condi��o se � divis�vel
void Divisivel::condicao_divisivel() {

	if(numero % 10 == 0) { // se o resto da divis�o do n�mero por 10 for 0, o n�mero � divis�vel por 10, 5 e 2
		cout << endl;
		cout << "O numero |" << numero << "| e divisivel por 10, por 5 e por 2." << endl;
		return;
	}

	if(numero % 5 == 0) { // se o resto da divis�o do n�mero por 5 for 0, o n�mero � divis�vel por 5 mas n�o � divis�vel por 10 e 2
		cout << endl;
		cout << "O numero |" << numero << "| e divisivel por 5 mas nao e divisivel por 10 e por 2." << endl;
		return;
	}

	if (numero % 2 == 0) { // se o resto da divis�o do n�mero por 2 for 0, o n�mero � divis�vel por 2 mas n�o � divis�vel por 10 e 5
		cout << endl;
		cout << "O numero |" << numero << "| e divisivel por 2 mas nao e divisivel por 10 e por 5." << endl;
		return;
	}

	cout << endl;
	cout << "O numero nao e divisivel por 10, por 5 e por 2." << endl;
}
