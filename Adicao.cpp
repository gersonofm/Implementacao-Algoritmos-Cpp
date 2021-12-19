//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Construir um programa em C++ que leia dois números e efetue a
//adição.Caso o valor somado seja maior que 20, este deverá ser
//apresentado somando - se a ele mais 8; caso o valor somado seja
//menor ou igual a 20, este deverá ser apresentado subtraindo 5.

#include <iostream>
#include "Adicao.hpp" // chamada da classe

using namespace std;

// método/função entrada de dados pelo usuário
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

// método/função realiza a condição
void Adicao::condicao_se() {

	resultadoAdicao = numero1 + numero2;

	if (resultadoAdicao > condicao) {
		maiorQueCondicao = resultadoAdicao + adicao;
		cout << endl;
		cout.precision(2); // precisão de 2 casas decimais
		cout << fixed; // fixa as casas decimais
		cout << "O resultado e: |" << maiorQueCondicao << "|" << endl;
	}
	else {
		menorIgualQueCondicao = resultadoAdicao - subtracao;
		cout << endl;
		cout.precision(2); // precisão de 2 casas decimais
		cout << fixed; // fixa as casas decimais
		cout << "O resultado e: |" << menorIgualQueCondicao << "|" << endl;
	}
}
