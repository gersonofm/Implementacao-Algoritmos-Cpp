//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Criar um programa em C++ que imprima(escrever na tela) a média
//aritmética entre 3 números digitados pelo usuário.

// incluir apenas uma vez no processo de compilação
#pragma once

// classe Maior
class MediaAritmetica {

// atributos
private:
	double numero1, numero2, numero3;
	double media_aritmetica;

// métodos
public:
	void entrada_usuario();
	void calcula_media();
	void imprime_resultado();
};
