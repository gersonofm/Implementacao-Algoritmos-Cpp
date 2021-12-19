//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 14 de dezembro de 2021
//
//Criar um programa em C++ que imprima(escrever na tela) a m�dia
//aritm�tica entre 3 n�meros digitados pelo usu�rio.

#include <iostream>
#include "MediaAritmetica.hpp" // chamada da classe MediaAritmetica

using namespace std;

// m�todo/fun��o entrada de dados pelo usu�rio
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

// m�todo/fun��o calcula m�dia aritm�tica
void MediaAritmetica::calcula_media() {

	media_aritmetica = (numero1 + numero2 + numero3) / 3;
}

// m�todo/fun��o imprime resultado da m�dia aritm�tica
void MediaAritmetica::imprime_resultado() {

	cout << endl;
	cout.precision(2); // precis�o de 2 casas decimais
	cout<< fixed; // fixa as casas decimais
	cout << "Media aritmetica = |" << media_aritmetica << "|" << endl;
}