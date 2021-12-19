//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Em épocas de pouco dinheiro, os comerciantes estão procurando
//aumentar suas vendas oferecendo desconto.Faça um programa em
//C++ que possa entrar com o valor de um produto e imprima
//(escrever na tela) o novo valor tendo em vista que o desconto foi de 9 % .

#include <iostream>
#include "Desconto.hpp" // chamada da classe

using namespace std;

// método/função entrada do usuário
void Desconto::entrada_valor() {

	cout << endl;
	cout << "Digite o valor do produto: " << endl;
	cin >> valor_produto;
}

// método/função calcula o desconto
void Desconto::calcula_desconto() {

	valor_desconto = valor_produto * taxa_desconto;	
}

// método/função calcula o valor final
void Desconto::valorFinalComDesconto() {

	valorComDesconto = valor_produto - valor_desconto;
}

// método/função imprime resultado
void Desconto::imprimeValorFinal() {

	cout << endl;
	cout.precision(2); // precisão de 2 casas decimais
	cout << fixed; // fixa as casas decimais
	cout << "Valor do produto = |" << valor_produto << "|" << endl;
	cout << "Desconto de 9% aplicado = |" << valor_desconto << "|" << endl;
	cout << "Valor do produto com desconto = |" << valorComDesconto << "|" << endl;
}