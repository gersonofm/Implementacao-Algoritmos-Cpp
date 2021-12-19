//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Criar um programa em C++ onde o usuário vai entrar com os
//valores dos catetos de um triângulo retângulo e imprimira hipotenusa

#include <iostream>
#include <cmath> // biblioteca fórmulas matemáticas
#include "Hipotenusa.hpp" // chamada da classe Hipotenusa

using namespace std;

// método/função entrada de dados pelo usuário
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

// método/função Teorema de Pitágoras
void Hipotenusa::teorema_pitagoras() {

	hipotenusa = sqrt(pow(cateto_adjacente, 2) + pow(cateto_oposto, 2)); // sqrt usado para raiz quadrada e pow para potência
}

// método/função imprime hipotenusa
void Hipotenusa::imprime_resultado() {

	cout << endl;
	cout.precision(2); // precisão de 2 casas decimais
	cout << fixed; // fixar as casas decimais
	cout << "Hipotenusa = |" << hipotenusa << "|" << endl;
}