//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Entrar com o salario de uma pessoa e imprimir o desconto de INSS segundo a tabela a seguir:
//Menor ou igual a R$600,00 -> ISENTO
//Maior que R$600,00 e menor ou igual a R$1200,00 -> 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 -> 25%
//Maior que R$2000,00 -> 30%

#include <iostream>
#include "DescontoINSS.hpp" // chamada da classe

using namespace std;

// método/função entrada de dados pelo usuário
void DescontoINSS::entrada_usuario() {

	cout << endl;
	cout << "Digite seu salario bruto: " << endl;
	cin >> salario;
}

// método/função calcula o desconto de INSS
void DescontoINSS::calcula_INSS() {

	if (salario <= 600) { // se o salário for menor ou igual a 600 -> ISENTO
		cout << endl;
		cout << "Sua faixa salarial e isenta de INSS." << endl;
		return;
	}

	if (salario > 600 && salario <= 1200) { // se o salário for maior que 600 e menor ou igual a 1200 -> 20%
		descontoINSS = salario * 0.2;
		cout << endl;
		cout.precision(2); // precisão de 2 casas decimais
		cout << fixed;
		cout << "Sua faixa salarial possui aliquota de 20% de INSS." << endl;
		cout << "O valor do desconto de INSS e: |" << descontoINSS << "|" << endl;
		return;
	}

	if (salario > 1200 && salario <= 2000) { // se o salário for maior que 1200 e menor ou igual a 2000 -> 25%
		descontoINSS = salario * 0.25;
		cout << endl;
		cout.precision(2); // precisão de 2 casas decimais
		cout << fixed;
		cout << "Sua faixa salarial possui aliquota de 25% de INSS." << endl;
		cout << "O valor do desconto de INSS e: |" << descontoINSS << "|" << endl;
		return;
	}
	else { // se o salário for maior que 30%
		descontoINSS = salario * 0.3;
		cout << endl;
		cout.precision(2); // precisão de 2 casas decimais
		cout << fixed;
		cout << "Sua faixa salarial possui aliquota de 30% de INSS." << endl;
		cout << "O valor do desconto de INSS e: |" << descontoINSS << "|" << endl;
	}
}
