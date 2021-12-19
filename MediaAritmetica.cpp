//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Criar um programa em C++ que imprima(escrever na tela) a média
//aritmética entre 3 números digitados pelo usuário.

#include <iostream>
#include "MediaAritmetica.hpp" // chamada da classe MediaAritmetica

using namespace std;

// método/função entrada de dados pelo usuário
void MediaAritmetica::entrada_usuario() {

	cout << endl;
	cout << "Digite o primeiro numero: " << endl;
	cin >> numero1;
	cout << endl;
	cout << "Digite o segundo numero: " << endl;
	cin >> numero2;
	cout << endl;
	cout << "Digite o terceiro numero: " << endl;
	cin >> numero3;
}

// método/função calcula média aritmética
void MediaAritmetica::calcula_media() {

	media_aritmetica = (numero1 + numero2 + numero3) / 3;
}

// método/função imprime resultado da média aritmética
void MediaAritmetica::imprime_resultado() {

	cout << endl;
	cout.precision(2); // precisão de 2 casas decimais
	cout<< fixed; // fixa as casas decimais
	cout << "Media aritmetica = |" << media_aritmetica << "|" << endl;
}