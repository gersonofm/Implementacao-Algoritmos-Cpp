//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Ler uma temperatura em graus centígrados e apresentá-la
//convertida em graus Fahrenheit.A fórmula de conversão é : F = (9 * C + 160) / 5
//onde F e a temperatura em Fahrenheit e C é a temperatura em centígrados.

// incluir apenas uma vez no processo de compilação
#pragma once

// classe
class ConversaoFahrenheit
{

// atributos
private:
	double grausCentigrados;
	double grausFahrenheit;

// métodos
public:
	void entrada_usuario();
	void conversao();
	void imprime_conversao();
};

