//Dev: Gerson Otavio Fernandes Moreira
//
//Goiânia, 14 de dezembro de 2021
//
//Em épocas de pouco dinheiro, os comerciantes estão procurando
//aumentar suas vendas oferecendo desconto.Faça um programa em
//C++ que possa entrar com o valor de um produto e imprima
//(escrever na tela) o novo valor tendo em vista que o desconto foi de 9 % .

// incluir apenas uma vez no processo de compilação
#pragma once

// classe Desconto
class Desconto {

// atributos
private:
	double valor_produto;
	const double taxa_desconto = 0.09;
	double valor_desconto;
	double valorComDesconto;

// métodos
public:
	void entrada_valor();
	void calcula_desconto();
	void valorFinalComDesconto();
	void imprimeValorFinal();
};
