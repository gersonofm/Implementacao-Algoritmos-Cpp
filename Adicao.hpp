//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 15 de dezembro de 2021
//
//Construir um programa em C++ que leia dois n�meros e efetue a
//adi��o.Caso o valor somado seja maior que 20, este dever� ser
//apresentado somando - se a ele mais 8; caso o valor somado seja
//menor ou igual a 20, este dever� ser apresentado subtraindo 5.

// incluir apenas uma vez no processo de compila��o
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

// m�todos
public:
	void entrada_usuario();
	void condicao_se();
};

