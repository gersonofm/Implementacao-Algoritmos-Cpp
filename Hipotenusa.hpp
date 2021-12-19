//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Criar um programa em C++ onde o usuário vai entrar com os
//valores dos catetos de um triângulo retângulo e imprimira hipotenusa

// incluir apenas uma vez no processo de compilação
#pragma once

// classe Hipotenusa
class Hipotenusa {

// atributos
private:
	int cateto_adjacente;
	int cateto_oposto;
	double hipotenusa;

// métodos
public:
	void entrada_usuario();
	void teorema_pitagoras();
	void imprime_resultado();
};
