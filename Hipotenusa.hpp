//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 14 de dezembro de 2021
//
//Criar um programa em C++ onde o usu�rio vai entrar com os
//valores dos catetos de um tri�ngulo ret�ngulo e imprimira hipotenusa

// incluir apenas uma vez no processo de compila��o
#pragma once

// classe Hipotenusa
class Hipotenusa {

// atributos
private:
	int cateto_adjacente;
	int cateto_oposto;
	double hipotenusa;

// m�todos
public:
	void entrada_usuario();
	void teorema_pitagoras();
	void imprime_resultado();
};
