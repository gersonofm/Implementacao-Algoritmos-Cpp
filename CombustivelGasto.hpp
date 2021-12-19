//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 15 de dezembro de 2021
//
//Efetuar o c�lculo da quantidade de litros de combust�vel gastos em
//uma viagem, sabendo - se que o carro faz 12 km com um litro.
//Dever�o ser fornecidos o tempo gasto na viagem e a velocidade
//m�dia.O programa em C++ dever� apresentar os valores da
//velocidade m�dia, tempo gasto na viagem, dist�ncia percorrida e a
//quantidade de litros utilizados na viagem.

// incluir apenas uma vez no processo de compila��o
#pragma once

// classe
class CombustivelGasto
{

// atributos
private:
	const double consumoCarro = 12;
	double tempoGasto;
	double velocidadeMedia;
	double distancia;
	double quantidadeLitros;

// m�todos
public:
	void entrada_usuario();
	void quantidade_litros_gastos();
	void imprime_litros_gastos();
};

