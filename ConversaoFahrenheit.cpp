//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 14 de dezembro de 2021
//
//Ler uma temperatura em graus cent�grados e apresent�-la
//convertida em graus Fahrenheit.A f�rmula de convers�o � : F = (9 * C + 160) / 5
//onde F e a temperatura em Fahrenheit e C � a temperatura em cent�grados.

#include <iostream>
#include "ConversaoFahrenheit.hpp" // chamada da classe

using namespace std;

// m�todo/fun��o entrada de dados pelo usu�rio
void ConversaoFahrenheit::entrada_usuario() {

	cout << endl;
	cout << "Digite a temperatura em graus Celsius: " << endl;
	cin >> grausCentigrados;
}

// m�todo/fun��o conversao de Celsiu para Fahrenheit
void ConversaoFahrenheit::conversao() {

	grausFahrenheit = ((9 * grausCentigrados) + 160) / 5;
}

// m�todo/fun��o impressao de resultado
void ConversaoFahrenheit::imprime_conversao() {

	cout << endl;
	cout.precision(1); // precis�o de 1 casa decimal
	cout << fixed; // fixa as casas decimais
	cout << "A temperatura |" << grausCentigrados << "| em Celsius equivale a |" << grausFahrenheit << "| em Fahrenheit" << endl;
}
