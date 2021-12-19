//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 15 de dezembro de 2021
//
//Criar um programa em C++ que imprima (escrever na tela)
//uma tabela de convers�o de polegadas para cent�metros.Deseja - se
//que na tabela conste valores desde 1 polegada at� 20 polegadas inteiras.

#include <iostream>
#include "ConversaoPolegadas.hpp" // chamada da classe

using namespace std;

void ConversaoPolegadas::laco_repeticao() {

	cout << endl;

	for (int i = 1; i <= limite; i++) {

		centimetro = centimetro + polegada;

		cout.precision(2);
		cout << fixed;
		cout << "|" << i << "| polegadas = |" << centimetro << "| centimetros" << endl;
	}
}