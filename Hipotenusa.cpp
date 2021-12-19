//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 14 de dezembro de 2021
//
//Criar um programa em C++ onde o usu�rio vai entrar com os
//valores dos catetos de um tri�ngulo ret�ngulo e imprimira hipotenusa

#include <iostream>
#include <cmath> // biblioteca f�rmulas matem�ticas
#include "Hipotenusa.hpp" // chamada da classe Hipotenusa

using namespace std;

// m�todo/fun��o entrada de dados pelo usu�rio
void Hipotenusa::entrada_usuario() {

	cout << endl;
	cout << "Calculo da Hipotenusa" << endl;
	cout << endl;
	cout << "Digite o cateto adjacente: " << endl;
	cin >> cateto_adjacente;
	cout << endl;
	cout << "Digite o cateto oposto: " << endl;
	cin >> cateto_oposto;
}

// m�todo/fun��o Teorema de Pit�goras
void Hipotenusa::teorema_pitagoras() {

	hipotenusa = sqrt(pow(cateto_adjacente, 2) + pow(cateto_oposto, 2)); // sqrt usado para raiz quadrada e pow para pot�ncia
}

// m�todo/fun��o imprime hipotenusa
void Hipotenusa::imprime_resultado() {

	cout << endl;
	cout.precision(2); // precis�o de 2 casas decimais
	cout << fixed; // fixar as casas decimais
	cout << "Hipotenusa = |" << hipotenusa << "|" << endl;
}