//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 15 de dezembro de 2021
//
//Entrar com o salario de uma pessoa e imprimir o desconto de INSS segundo a tabela a seguir:
//Menor ou igual a R$600,00 -> ISENTO
//Maior que R$600,00 e menor ou igual a R$1200,00 -> 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 -> 25%
//Maior que R$2000,00 -> 30%

// incluir apenas uma vez no processo de compilação
#pragma once

// classe
class DescontoINSS
{
// atributos
private:
	double salario;
	double descontoINSS;

// métodos
public:
	void entrada_usuario();
	void calcula_INSS();
};

