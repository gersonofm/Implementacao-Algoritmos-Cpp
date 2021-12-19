//Dev: Gerson Otavio Fernandes Moreira
//
//Goi�nia, 14 de dezembro de 2021
//
//Em �pocas de pouco dinheiro, os comerciantes est�o procurando
//aumentar suas vendas oferecendo desconto.Fa�a um programa em
//C++ que possa entrar com o valor de um produto e imprima
//(escrever na tela) o novo valor tendo em vista que o desconto foi de 9 % .

// incluir apenas uma vez no processo de compila��o
#pragma once

// classe Desconto
class Desconto {

// atributos
private:
	double valor_produto;
	const double taxa_desconto = 0.09;
	double valor_desconto;
	double valorComDesconto;

// m�todos
public:
	void entrada_valor();
	void calcula_desconto();
	void valorFinalComDesconto();
	void imprimeValorFinal();
};
