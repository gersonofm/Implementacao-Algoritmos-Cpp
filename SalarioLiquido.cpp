//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 14 de dezembro de 2021
//
//Criar um programa em C++ que efetue o c�lculo do sal�rio l�quido
//de um professor.Os dados fornecidos ser�o : valor da hora / aula,
//n�mero de aulas dadas no m�s e percentual de desconto do INSS.

#include <iostream>
#include "SalarioLiquido.hpp" // chamada da classe

using namespace std;

// m�todo/fun��o entrada de dados pelo usu�rio
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

// m�todo/fun��o c�lculo sal�rio bruto
void SalarioLiquido::salario_bruto() {

	salarioBruto = valorHoraAula * aulasDadasMes;
}

// m�todo/fun��o c�lculo desconto de INSS
void SalarioLiquido::desconto_INSS() {

	valorDescontoINSS = salarioBruto * (aliquotaINSS / 100);
}

// m�todo/fun��o c�lculo sal�rio l�quido
void SalarioLiquido::salario_liquido() {

	SalarioFinal = salarioBruto - valorDescontoINSS;
}

// m�todo/fun��o imprime resultado
void SalarioLiquido::imprime_resultado() {

	cout << endl;
	cout.precision(2); // precis�o de 2 casas decimais
	cout << fixed; // fixa as casas decimais
	cout << "Salario Bruto = |" << salarioBruto << "|" << endl;
	cout << "Aliquota de INSS = |" << aliquotaINSS << "|" << endl;
	cout << "Desconto de INSS = |" << valorDescontoINSS << "|" << endl;
	cout << "Salario Liquido = |" << SalarioFinal << "|" << endl;
}