//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Criar um programa em C++ que efetue o cálculo do salário líquido
//de um professor.Os dados fornecidos serão : valor da hora / aula,
//número de aulas dadas no mês e percentual de desconto do INSS.

// incluir apenas uma vez no processo de compilação
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

// métodos
public:
	void entrada_usuario();
	void salario_bruto();
	void desconto_INSS();
	void salario_liquido();
	void imprime_resultado();
};

