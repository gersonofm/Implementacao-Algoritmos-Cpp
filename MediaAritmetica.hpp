//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 14 de dezembro de 2021
//
//Criar um programa em C++ que imprima(escrever na tela) a m�dia
//aritm�tica entre 3 n�meros digitados pelo usu�rio.

// incluir apenas uma vez no processo de compila��o
#pragma once

// classe Maior
class MediaAritmetica {

// atributos
private:
	double numero1, numero2, numero3;
	double media_aritmetica;

// m�todos
public:
	void entrada_usuario();
	void calcula_media();
	void imprime_resultado();
};
