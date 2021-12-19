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

#include <iostream>
#include "CombustivelGasto.hpp" // chamada da classe

using namespace std;

// método/função entrada de dados pelo usuário
void CombustivelGasto::entrada_usuario() {

	cout << endl;
	cout << "Digite o tempo gasto de viagem (Horas) Exemplo: 30min = 0.5 horas | 2h15min = 2.25 horas" << endl;
	cin >> tempoGasto;
	cout << endl;
	cout << "Digite a velocidade media (Km/h) Exemplo: 80 Km/h" << endl;
	cin >> velocidadeMedia;
}

// método/função calcula distancia percorrida e a quantidade de litros de combustível consumido
void CombustivelGasto::quantidade_litros_gastos() {

	distancia = tempoGasto * velocidadeMedia;
	quantidadeLitros = distancia / consumoCarro;
}

// método/função impressão do resultado
void CombustivelGasto::imprime_litros_gastos() {

	cout << endl;
	cout.precision(2); // precisão de 2 casas decimais
	cout << fixed; // fixa as casas decimais
	cout << "Velocidade media: |" << velocidadeMedia << "| Km/h" << endl;
	cout << "Tempo gasto na viagem: |" << tempoGasto << "| Horas" << endl;
	cout << "Distancia percorrida: |" << distancia << "| Km" << endl;
	cout << "Foram gastos |" << quantidadeLitros << "| litros durante a viagem." << endl;
}
