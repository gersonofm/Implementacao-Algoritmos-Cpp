//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Criar um programa em C++ que efetue o cálculo do salário líquido
//de um professor.Os dados fornecidos serão : valor da hora / aula,
//número de aulas dadas no mês e percentual de desconto do INSS.

#include <iostream>
#include "SalarioLiquido.hpp" // chamada da classe

using namespace std;

// método/função entrada de dados pelo usuário
void SalarioLiquido::entrada_usuario() {

	cout << endl;
	cout << "Digite o valor da hora/aula: " << endl;
	cin >> valorHoraAula;
	cout << endl;
	cout << "Digite o numero de aulas dadas no mes: " << endl;
	cin >> aulasDadasMes;
	cout << endl;
	cout << "Digite o percentual de desconto do INSS: " << endl;
	cin >> aliquotaINSS;
}

// método/função cálculo salário bruto
void SalarioLiquido::salario_bruto() {

	salarioBruto = valorHoraAula * aulasDadasMes;
}

// método/função cálculo desconto de INSS
void SalarioLiquido::desconto_INSS() {

	valorDescontoINSS = salarioBruto * (aliquotaINSS / 100);
}

// método/função cálculo salário líquido
void SalarioLiquido::salario_liquido() {

	SalarioFinal = salarioBruto - valorDescontoINSS;
}

// método/função imprime resultado
void SalarioLiquido::imprime_resultado() {

	cout << endl;
	cout.precision(2); // precisão de 2 casas decimais
	cout << fixed; // fixa as casas decimais
	cout << "Salario Bruto = |" << salarioBruto << "|" << endl;
	cout << "Aliquota de INSS = |" << aliquotaINSS << "|" << endl;
	cout << "Desconto de INSS = |" << valorDescontoINSS << "|" << endl;
	cout << "Salario Liquido = |" << SalarioFinal << "|" << endl;
}