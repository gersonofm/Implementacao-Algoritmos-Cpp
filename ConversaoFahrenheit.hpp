//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 14 de dezembro de 2021
//
//Ler uma temperatura em graus cent�grados e apresent�-la
//convertida em graus Fahrenheit.A f�rmula de convers�o � : F = (9 * C + 160) / 5
//onde F e a temperatura em Fahrenheit e C � a temperatura em cent�grados.

// incluir apenas uma vez no processo de compila��o
#pragma once

// classe
class ConversaoFahrenheit
{

// atributos
private:
	double grausCentigrados;
	double grausFahrenheit;

// m�todos
public:
	void entrada_usuario();
	void conversao();
	void imprime_conversao();
};

