//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Ler uma temperatura em graus centígrados e apresentá-la
//convertida em graus Fahrenheit.A fórmula de conversão é : F = (9 * C + 160) / 5
//onde F e a temperatura em Fahrenheit e C é a temperatura em centígrados.

#include <iostream>
#include "ConversaoFahrenheit.hpp" // chamada da classe

using namespace std;

// método/função entrada de dados pelo usuário
void ConversaoFahrenheit::entrada_usuario() {

	cout << endl;
	cout << "Digite a temperatura em graus Celsius: " << endl;
	cin >> grausCentigrados;
}

// método/função conversao de Celsiu para Fahrenheit
void ConversaoFahrenheit::conversao() {

	grausFahrenheit = ((9 * grausCentigrados) + 160) / 5;
}

// método/função impressao de resultado
void ConversaoFahrenheit::imprime_conversao() {

	cout << endl;
	cout.precision(1); // precisão de 1 casa decimal
	cout << fixed; // fixa as casas decimais
	cout << "A temperatura |" << grausCentigrados << "| em Celsius equivale a |" << grausFahrenheit << "| em Fahrenheit" << endl;
}
