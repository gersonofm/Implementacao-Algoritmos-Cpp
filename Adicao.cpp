//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 15 de dezembro de 2021
//
//Construir um programa em C++ que leia dois n�meros e efetue a
//adi��o.Caso o valor somado seja maior que 20, este dever� ser
//apresentado somando - se a ele mais 8; caso o valor somado seja
//menor ou igual a 20, este dever� ser apresentado subtraindo 5.

#include <iostream>
#include "Adicao.hpp" // chamada da classe

using namespace std;

// m�todo/fun��o entrada de dados pelo usu�rio
void Adicao::entrada_usuario() {

	cout << endl;
	cout << "Digite dois numeros." << endl;
	cout << "Se o resultado da soma for maior que 20, sera adicionado 8, se o resultado da soma for menor ou igual a 20, sera subtraido 5" << endl;
	cout << endl;
	cout << "Digite o primeiro numero: " << endl;
	cin >> numero1;
	cout << endl;
	cout << "Digite o segundo numero: " << endl;
	cin >> numero2;
}

// m�todo/fun��o realiza a condi��o
void Adicao::condicao_se() {

	resultadoAdicao = numero1 + numero2;

	if (resultadoAdicao > condicao) {
		maiorQueCondicao = resultadoAdicao + adicao;
		cout << endl;
		cout.precision(2); // precis�o de 2 casas decimais
		cout << fixed; // fixa as casas decimais
		cout << "O resultado e: |" << maiorQueCondicao << "|" << endl;
	}
	else {
		menorIgualQueCondicao = resultadoAdicao - subtracao;
		cout << endl;
		cout.precision(2); // precis�o de 2 casas decimais
		cout << fixed; // fixa as casas decimais
		cout << "O resultado e: |" << menorIgualQueCondicao << "|" << endl;
	}
}
