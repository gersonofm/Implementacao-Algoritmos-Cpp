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

#include <iostream>
#include "CombustivelGasto.hpp" // chamada da classe

using namespace std;

// m�todo/fun��o entrada de dados pelo usu�rio
void CombustivelGasto::entrada_usuario() {

	cout << endl;
	cout << "Digite o tempo gasto de viagem (Horas) Exemplo: 30min = 0.5 horas | 2h15min = 2.25 horas" << endl;
	cin >> tempoGasto;
	cout << endl;
	cout << "Digite a velocidade media (Km/h) Exemplo: 80 Km/h" << endl;
	cin >> velocidadeMedia;
}

// m�todo/fun��o calcula distancia percorrida e a quantidade de litros de combust�vel consumido
void CombustivelGasto::quantidade_litros_gastos() {

	distancia = tempoGasto * velocidadeMedia;
	quantidadeLitros = distancia / consumoCarro;
}

// m�todo/fun��o impress�o do resultado
void CombustivelGasto::imprime_litros_gastos() {

	cout << endl;
	cout.precision(2); // precis�o de 2 casas decimais
	cout << fixed; // fixa as casas decimais
	cout << "Velocidade media: |" << velocidadeMedia << "| Km/h" << endl;
	cout << "Tempo gasto na viagem: |" << tempoGasto << "| Horas" << endl;
	cout << "Distancia percorrida: |" << distancia << "| Km" << endl;
	cout << "Foram gastos |" << quantidadeLitros << "| litros durante a viagem." << endl;
}
