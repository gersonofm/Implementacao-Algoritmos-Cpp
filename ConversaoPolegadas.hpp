//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Criar um programa em C++ que imprima (escrever na tela)
//uma tabela de conversão de polegadas para centímetros.Deseja - se
//que na tabela conste valores desde 1 polegada até 20 polegadas inteiras.

// incluir apenas uma vez no processo de compilação
#pragma once

// classe
class ConversaoPolegadas
{
// atributos
private:
	const double polegada = 2.54;
	double centimetro = 0;
	const int limite = 20;

// métodos
public:
	void laco_repeticao();
};

