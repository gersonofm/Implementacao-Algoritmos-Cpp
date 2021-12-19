//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Implementar em C++ a classe chamada de RETRI, onde essa
//classe é responsável por calcular a área do Triangulo e também do Retângulo.

#include <iostream>
#include "RETRI.hpp" // chamada da classe

using namespace std;

void RETRI::entrada_usuario() {

	cout << endl;
	cout << "Calcule a area do triangulo e do retangulo" << endl;

	cout << endl;
	cout << "Digite a base: " << endl;
	cin >> base;

	cout << endl;
	cout << "Digite a altura: " << endl;
	cin >> altura;
}

void RETRI::calcula_area() {

	areaTriangulo = (base * altura) / 2;
	areaRetangulo = base * altura;
}

void RETRI::imprime_resultado() {

	cout << endl;
	cout.precision(2); // precisão de 2 casas decimais
	cout << fixed;
	cout << "Area do triangulo = |" << areaTriangulo << "|" << endl;

	cout << endl;
	cout.precision(2); // precisão de 2 casas decimais
	cout << fixed;
	cout << "Area do retangulo = |" << areaRetangulo << "|" << endl;
}
