//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Construir um programa em C++ que leia dois números e efetue a
//adição.Caso o valor somado seja maior que 20, este deverá ser
//apresentado somando - se a ele mais 8; caso o valor somado seja
//menor ou igual a 20, este deverá ser apresentado subtraindo 5.

// incluir apenas uma vez no processo de compilação
#pragma once

// classe
class Adicao
{
// atributos
private:
	double numero1;
	double numero2;
	double resultadoAdicao;
	const short int condicao = 20;
	double maiorQueCondicao;
	const short int adicao = 8;
	double menorIgualQueCondicao;
	const short int subtracao = 5;

// métodos
public:
	void entrada_usuario();
	void condicao_se();
};

