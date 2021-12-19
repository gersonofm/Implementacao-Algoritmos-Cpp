//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 15 de dezembro de 2021
//
//Entrar com um n�mero e imprimir uma das mensagens: � m�ltiplo
//de 3 ou n�o � m�ltiplo de 3.

#include <iostream>
#include "Multiplo3.hpp" // chamada da classe

using namespace std;

// m�todo/fun��o entrada de dados pelo usu�rio
void Multiplo3::entrada_usuario() {

	cout << endl;
	cout << "Verifique se o numero e multiplo de 3" << endl;
	cout << "Digite um numero: " << endl;
	cin >> numero;
}

// m�todo/fun��o condic�o m�ltiplo
void Multiplo3::condicao_multiplo() {

	if (numero % 3 == 0) { // se o resto da divis�o do n�mero por 3 for igual a 0, significa que o n�mero � m�ltiplo de 3
		cout << endl;
		cout.precision(2); // precis�o de 2 casas decimais
		cout << fixed;
		cout << "O numero |" << numero << "| e multiplo de 3" << endl;
	}
	else {
		cout << endl;
		cout.precision(2); // precis�o de 2 casas decimais
		cout << fixed;
		cout << "O numero |" << numero << "| nao e multiplo de 3" << endl;
	}
}
