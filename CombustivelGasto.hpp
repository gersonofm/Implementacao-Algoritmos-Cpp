//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Efetuar o cálculo da quantidade de litros de combustível gastos em
//uma viagem, sabendo - se que o carro faz 12 km com um litro.
//Deverão ser fornecidos o tempo gasto na viagem e a velocidade
//média.O programa em C++ deverá apresentar os valores da
//velocidade média, tempo gasto na viagem, distância percorrida e a
//quantidade de litros utilizados na viagem.

// incluir apenas uma vez no processo de compilação
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

// métodos
public:
	void entrada_usuario();
	void quantidade_litros_gastos();
	void imprime_litros_gastos();
};

