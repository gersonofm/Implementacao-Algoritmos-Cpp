//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 14 de dezembro de 2021
//
//Criar um programa em C++ que efetue o c�lculo do sal�rio l�quido
//de um professor.Os dados fornecidos ser�o : valor da hora / aula,
//n�mero de aulas dadas no m�s e percentual de desconto do INSS.

// incluir apenas uma vez no processo de compila��o
#pragma once

// classe Salario Liquido
class SalarioLiquido
{

// atributos
private:
	double valorHoraAula;
	double aulasDadasMes;
	double salarioBruto;
	double aliquotaINSS;
	double valorDescontoINSS;
	double SalarioFinal;

// m�todos
public:
	void entrada_usuario();
	void salario_bruto();
	void desconto_INSS();
	void salario_liquido();
	void imprime_resultado();
};

