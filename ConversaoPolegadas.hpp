//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 15 de dezembro de 2021
//
//Criar um programa em C++ que imprima (escrever na tela)
//uma tabela de convers�o de polegadas para cent�metros.Deseja - se
//que na tabela conste valores desde 1 polegada at� 20 polegadas inteiras.

// incluir apenas uma vez no processo de compila��o
#pragma once

// classe
class ConversaoPolegadas
{
// atributos
private:
	const double polegada = 2.54;
	double centimetro = 0;
	const int limite = 20;

// m�todos
public:
	void laco_repeticao();
};

